/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

Lista insertarEnListaOrdenada(Lista l, Elemento v); // O(n^2)

int main(){
  Lista l;
  l.anxLista(5);
  l.anxLista(10);
  l.anxLista(12);
  l.anxLista(15);

  
  cout << "Tamaño: " << l.longLista() << endl;

  
  cout << "Elementos Lista:" << endl;

  int i;
  for(i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }
  cout << endl;

  if(l.vaciaLista())
    cout << "Lista Vacía" << endl;
  else
    cout << "Lista No Vacía" << endl;


  insertarEnListaOrdenada(l,14);
  cout << "Elementos Lista:" << endl;
  for(i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }
  cout << endl;

  return 0;
}

Lista insertarEnListaOrdenada (Lista l, Elemento v){
  int i = 1;                 // 1
  while(v > l.infoLista(i))  // n(n)
    i++;                     // n(n)-1
  l.insLista(v,i);           // n
  return l;                  // 1
}
