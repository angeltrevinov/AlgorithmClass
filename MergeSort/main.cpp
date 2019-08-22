#include <iostream>

using namespace std;

void Une(int inicio, int mitad, int fin){
  int i = inicio; int j = mitad+1; int k = inicio;
  while(i<= mitad && j <= fin){
    if(arreglo[i] < arreglo[j]){
      aux[k] = arreglo[i];
      i = i +1;
    }else{
      aux[k] = arreglo[j];
      j = j + 1;
    }
  }

  if(i > mitad)
      //mover elementos j a fin del arreglo al arreglo aux de k a fin
  else
    //mover elementos i a mitad del arreglo al arreglo aux de k a fin

//copiar aux a arreglo

}

void MergeSort(int inicio, int fin){
  if(inicio < fin){
    mitad = (inicio + fin) / 2;
    MergeSort(inicio, mitad);
    MergeSort(mitad + 1, fin);
    Une(inicio, mitad, fin);
  }
}


int main(){

  /* Code Here */

  return 0;
}
