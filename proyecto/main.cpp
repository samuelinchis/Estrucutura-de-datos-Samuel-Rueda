#include "BigInteger.h"
#include <iostream>

using namespace std;

int main()
{
    //comprobacion de la funcion add
    string C = "11";
    string D = "12";
    BigInteger numero(C);
    BigInteger copia(D);
    

    numero.print();
    copia.print();

    cout<< "La suma de los numeros es:"<<endl;
    numero.add(copia);
    numero.print();
    cout << endl;

    //comprobacion de la sobrecarga ==
    cout << endl;
    string OG = "4356";
    BigInteger hola(OG);
    BigInteger copiahola(hola);
    if(hola == copiahola)
        cout << "son iguales"<<endl;
    //comprobacion de la sobrecarga <
    if(numero < copia){
        cout << "es menor"<<endl;
    }else
    cout << "no es menor"<<endl;
    //comprobacion de la sobrecarga +
     BigInteger jajaja = numero+copia;
     jajaja.print();
    return 0;
}

