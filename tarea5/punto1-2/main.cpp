/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

int contarOcurrencias(Lista l, Elemento val);
Lista obtenerMenores(Lista l, Elemento val);

int main(){
  Lista l;
  l.anxLista(5);
  l.anxLista(10);
  l.anxLista(12);
  l.anxLista(15);

  cout << "Valor posición 1: " << l.infoLista(1) << endl;
  cout << "Valor posición 2: " << l.infoLista(2) << endl;
  cout << "Valor posición 3: " << l.infoLista(3) << endl;
  cout << "Tamaño: " << l.longLista() << endl;

  l.insLista(13, 2);

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
  l.insLista(13, 3);
  cout << "Ocurrencias del 13 en la lista: " << contarOcurrencias(l,13) << endl;
  Lista lNuevo = obtenerMenores(l,13);
  for(int s = 1 ; s <= lNuevo.longLista() ; s++)
    cout << "Obtener todos los numeros menores a 13: " << lNuevo.infoLista(s) << endl;
  return 0;
}

int contarOcurrencias(Lista l, Elemento val){
  int contador = 0;
  for(int i = 1 ; i <= l.longLista() ; i++){
    if(l.infoLista(i) == val)
      contador ++;
  }
  return contador;
}
Lista obtenerMenores(Lista l, Elemento val){
  Lista s; 
  for(int i = 1 ; i <= l.longLista(); i++)
    if(l.infoLista(i) < val){
      int menor = l.infoLista(i);
      s.anxLista(menor);
    }
  return s;
}

