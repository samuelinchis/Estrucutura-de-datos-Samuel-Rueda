/* Autor: Samuel Rueda Sánchez*/
#include <string>
#include <vector>
#include <list>
#ifndef BIGINTEGER_H
#define BIGINTEGER_H

using namespace std;

class  BigInteger
{
	bool signo;
	vector<int> cora;

public: 
	//constructora
	 BigInteger(const string &numero);
	//constructora sin parametros
	BigInteger();
	//constructora que copia otro big integer
	 BigInteger(const BigInteger &OG);


	//OPERACIONES
	 void add(BigInteger &sumando);
	 void product(BigInteger &factor);
	 void substract(BigInteger &restando);
	 void quotient(BigInteger &divisor);
	 void remainder(BigInteger &denominador);
	 void pow(int &potencia);
	 void print(); //Esta operacion es exclusivamente para hacer pruebas//
	 string toString();


	//sobrecarga de operadores aritmeticos
	 BigInteger operator +(BigInteger &sum);
	 BigInteger operator -(BigInteger &sub);
	 BigInteger operator *(BigInteger &fact);
	 BigInteger operator /(BigInteger &divi);
	 BigInteger operator %(BigInteger &resi);


	//sobrecarga de operadores booleanos
	 bool operator ==(BigInteger &cmp);
	 bool operator <(BigInteger &min);
	 bool operator <=(BigInteger &minigual);

	 //operacion estatica 
	 static BigInteger sumarListasValores(list<BigInteger> lsum);
	 static BigInteger MultiplicarListaValores(list<BigInteger> lmul);

	
};

#endif
