/* Autor: Samuel Rueda */

#ifndef LISTADEC_H	
#define LISTADEC_H

class nodo
{
public:
	int dato
	nodo *sig;
	nodo *ant;
	//destructora de nodo
	~nodo();
	
};
class lista
{
	nodo *head
public:
	//constructora
	lista();
};

#endif
