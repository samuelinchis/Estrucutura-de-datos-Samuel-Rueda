/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

void concatenarListas(Lista l1, Lista l2); // O(n^2)

int main(){
  Lista l;
  l.anxLista(5);
  l.anxLista(10);
  l.anxLista(12);
  l.anxLista(15);

  Lista r;
  r.anxLista(18);
  r.anxLista(20);
  r.anxLista(22);
  r.anxLista(25);
 

 
  cout << "Elementos Lista l: " << endl;

  int i;
  for(i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }
  cout << endl;

  cout << "Elementos Lista r: " << endl;

  for(i = 1; i <= r.longLista(); i++){
    cout << r.infoLista(i) << " ";
  }
  cout << endl;

  concatenarListas(l,r);

  cout << "Elementos de la nueva Lista l: " << endl;

  for(i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }
  cout << endl;


  return 0;
}

void concatenarListas(Lista l1, Lista l2){
    int i;                              // 1
    int tam = l2.longLista();           // n
    for(i = 1 ; i <= tam ; ++i){        // n
      Elemento val = l2.infoLista(i);   // n(n) en la ultima iteracion infolista debe ir hasta el ultimo elemento de la lista
      l1.anxLista(val);                 // n(n) anxLista siempre tiene que ir hasta la ultima posicion
    }
}
