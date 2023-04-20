#include "lista.h"

Lista::Lista(){
  act = NULL;
}

void Lista::insListaOrdenada(Elemento elem){ // O(n) 
  Nodo* tmp = act;			// 1
  Nodo* nuevo = new Nodo;		// 1
  nuevo->dato = elem;			// 1
  nuevo->sig = NULL;			// 1

  if(act == NULL)			// 1
    act = nuevo;			// 1
  else if(nuevo->dato < tmp->dato){	// 1
    nuevo->sig = tmp;			// 1
    act = nuevo;			// 1
  }
  else{					// 1
    while(tmp->sig != NULL && nuevo->dato > tmp->sig->dato) //n En el peor caso toca recorrer la lista entera 
      tmp = tmp->sig;			// n-1
    nuevo->sig = tmp->sig;		// 1
    tmp->sig = nuevo;			// 1
  }
}

void Lista::elimLista(int pos){
  Nodo *tmp, *elim;
  if(pos >= 1 && pos <= longLista()){
    if(pos == 1)
      act = act->sig;
    else{
      tmp = act;
      for(int i = 0; i < pos-2; i++)
	tmp = tmp->sig;
      elim = tmp->sig;
      tmp->sig = tmp->sig->sig;
      delete elim;
    }
  }
}

Elemento Lista::infoLista(int pos){
  Nodo* tmp = act;

  for(int i = 1; i < pos; i++)
    tmp = tmp->sig;

  return tmp->dato;
}

int Lista::longLista(){
  Nodo* tmp = act;
  int cont = 0;

  while(tmp != NULL){
    tmp = tmp->sig;
    cont++;
  }

  return cont;
}

bool Lista::vaciaLista(){
  return act == NULL;
}
