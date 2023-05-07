/* Autor: Samuel Rueda Sánchez*/
#include "listaDEC.h"
#ifndef BIGINTEGER_H
#define BIGINTEGER_H

class  bigInteger
{
	lista cora;

public: 
	//constructora
	 bigInteger(string &numero);
	//constructora que copia otro big integer
	 bigInteger copy(bigInteger &OG);


	//OPERACIONES
	 void add(bigInteger &sumando);
	 void product(bigInteger &factor);
	 void substract(bigInteger &restando);
	 void quotient(bigInteger &divisor);
	 void remainder(bigInteger &denominador);
	 void pow(bigInteger &potencia);
	 string toString();


	//sobrecarga de operadores aritmeticos
	 bigInteger operator +(bigInteger &sum);
	 bigInteger operator -(bigInteger &sub);
	 bigInteger operator *(bigInteger &fact);
	 bigInteger operator /(bigInteger &divi);
	 bigInteger operator %(bigInteger &resi);


	//sobrecarga de operadores booleanos
	 bool operator ==(bigInteger &cmp);
	 bool operator <(bigInteger &min);
	 bool operator <=(bigInteger &minigual);

	 //operacion estatica 
	 static bigInteger sumarListasValores(lista lsum);
	 static bigInteger MultiplicarListaValores(lista lmul);

	//destructora
	~ bigInteger();
	
};

#endif
