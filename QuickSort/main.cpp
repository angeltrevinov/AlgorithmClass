#include <iostream>

using namespace std;

void Particion(int inicio, int fin, int &pivote){
    int elempivote = arreglo[inicio];
    int j = inicio;
    for(int i = inicio+1; i<= fin; i++){
      if(arreglo[i] < elempivote){
          j++;
          //intercambia arreglo[i] con arreglo[j]
      }
    }
    pivote = j;
    //intercambia arreglo[inicio] con arreglo[pivote]
}

void QuickSort(int inicio, int fin){
  if(inicio < fin){
    Particion(inicio, fin, pivote);
    QuickSort(inicio, pivote-1);
    QuickSort(pivote+1, fin;
  }
}

int main(){

  /* Code Here */

  return 0;
}
