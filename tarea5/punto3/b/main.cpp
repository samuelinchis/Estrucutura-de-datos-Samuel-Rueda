/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

int main(){
  Lista l;
  l.insListaOrdenada(5);
  l.insListaOrdenada(10);
  l.insListaOrdenada(12);
  l.insListaOrdenada(15);

  cout << "Valor posición 1: " << l.infoLista(1) << endl;
  cout << "Valor posición 2: " << l.infoLista(2) << endl;
  cout << "Valor posición 3: " << l.infoLista(3) << endl;
  cout << "Tamaño: " << l.longLista() << endl;

  l.insListaOrdenada(20);

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

  l.elimLista(1);
  l.elimLista(3);

  cout << "Elementos Lista:" << endl;
  for(i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }
  cout << endl;

  return 0;
}
