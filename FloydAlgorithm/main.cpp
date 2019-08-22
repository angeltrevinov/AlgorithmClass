/*
  Angel Odiel Treviño Villanueva
  A01336559
  Algoritmo de Floyd  Fecha: 19/feb  Materia: Diseño de Algortimos
*/

#include <iostream>
#include <fstream>
#include <climits>
#include <vector>

using namespace std;

void AlgoritmoFloyd(int D[100][100], int P[100][100], int n){
  for(int k = 0; k < n; k++){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(D[i][k] != INT_MAX && D[k][j] != INT_MAX){
          if(D[i][k] + D[k][j] < D[i][j]){
            P[i][j] = k;
            D[i][j] = D[i][k]+D[k][j];
          }
        }
      }
    }
  }
}

void Camino(int P[100][100], int Inicio, int Final){
  if (P[Inicio][Final] != 0) {
   Camino(P, Inicio, P[Inicio][Final]);
   cout << P[Inicio][Final] << " ";
   Camino(P, P[Inicio][Final], Final);
 }
}

int main(){

  int n; //cantidad de nodos
  int m; //cantidad de caminos
  int q; // cantidad de Queries
  cin >> n >> m >> q;

  //llenar la matriz de adyacentes con maximos y la diagonal mayor con 0
  int D[100][100];
  int P[100][100]; //matriz de ultimo nodo de inicializada en cero
  for(int i = 0; i < n; i++){
    D[i][i] = P[i][i] = 0;
    for(int j = i + 1; j < n; j++){
      D[j][i] = D[i][j] = INT_MAX;
      P[i][j] = P[j][i] = 0;
    }
  }

  // lee los arcos donde a y b son los caminos y c el valor del arco
  int a, b, c;
  for(int i = 0; i < m; i++){
    cin >> a >> b >> c;
    D[a-1][b-1] = D[b-1][a-1] = c;
  }

  AlgoritmoFloyd(D, P, n);

  for(int i = 0; i < q; i++){
    cin >> a >> b;
    cout << D[a-1][b-1] << endl;
    cout << a << " "; //imprime el primero
    Camino(P, a-1, b-1);
  }

  return 0;
}
