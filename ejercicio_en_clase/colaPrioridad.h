#ifndef  COLA_H
#define COLA_H

#include "lista.h"

typedef int Elemento;

class colaPrioridad{
   Lista l;

   public:
      colaPrioridad(); 
      Elemento front();
      void deque();
      void enqueue(Elemento);
      bool vaciaCola();
};

#endif
