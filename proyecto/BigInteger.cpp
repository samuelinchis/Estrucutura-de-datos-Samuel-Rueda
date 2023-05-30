#include "BigInteger.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm> 

using namespace std;

//inicializa un big integer recibe una cadena
BigInteger :: BigInteger(const string &numero){
    int i = 0;
    //si en la cadena hay un menos indica que el big integer es negativo
    /*si el numero es negativo entonces se activa un flag 
    y omite el signo para no guardarlo en el vector interno de biginteger*/
    if(numero[0]=='-'){
        i = 1;
        signo = true;
    }
    else{
        signo = false;
    }
    /*recorre la cadena transformando los caracteres en enteros y 
    añadiendolos al vector interno del biginteger*/
    for(i ; i < numero.size() ; ++i){
        cora.push_back(numero[i] - '0');
    }
}    

BigInteger ::  BigInteger(){
    signo = false; 
}

BigInteger ::  BigInteger(const BigInteger &OG){
    cora = OG.cora;
    signo = OG.signo;
}

void BigInteger :: print(){
    if(signo == true){
        cora[0] *= -1;
    }

    for(int i = 0 ; i < cora.size(); ++i){
        cout << cora[i];
    }
    cout << endl;
}

//Operaciones suponiendo que los big integer son positivos 
void BigInteger :: add(BigInteger &sumando){
    reverse(cora.begin(),cora.end());
    reverse(sumando.cora.begin(), sumando.cora.end());
    if(cora.size() < sumando.cora.size()){
        cora.resize(sumando.cora.size());
    }
    else if(cora.size() > sumando.cora.size()){
        sumando.cora.resize(cora.size());
    }
    int acum = 0;
    vector<int> :: iterator it, at = sumando.cora.begin();
    if(this->signo==sumando.signo){
        for(it = cora.begin(); it != cora.end(); ++it){
         *it += acum + *at; 
         acum = *it / 10; 
         *it %= 10;
         ++at;
        }
        if(acum != 0){
            cora.push_back(acum);
        }
    }
    if (this->signo != sumando.signo){
        //definir quien es mayor o menor
        BigInteger *mayor, *menor;
        bool thisesMayor = true;
        int i = 0;
        while (i < cora.size() && thisesMayor){
            if(cora[i] < sumando.cora[i]){
                thisesMayor = false;
            }
        }
        if(thisesMayor){
            mayor = this;
            menor = &sumando;
        }
        else{
            mayor = &sumando;
            menor = this;
        }
        mayor->substract(*menor);
        this->signo = mayor->signo;
    }
    reverse(cora.begin(),cora.end());
    reverse(sumando.cora.begin(), sumando.cora.end());
}

BigInteger BigInteger :: operator+(BigInteger &sum){
    BigInteger resultado(*this);
    BigInteger operando(sum);
    reverse(resultado.cora.begin() , resultado.cora.end());
    reverse(operando.cora.begin() , operando.cora.end());
    if(resultado.cora.size() < operando.cora.size()){
        resultado.cora.resize(operando.cora.size());
    }
    else if(operando.cora.size() < resultado.cora.size()){
        operando.cora.resize(resultado.cora.size());
    }
        int acum = 0;
        vector<int> :: iterator it, at = operando.cora.begin();
        for(it = resultado.cora.begin(); it != resultado.cora.end(); ++it){
            *it += acum + *at; 
            acum = *it / 10;
            *it %= 10;
            ++at; 
        }
        if(acum != 0){
            resultado.cora.push_back(acum);
        }
        reverse(resultado.cora.begin(),resultado.cora.end());
        reverse(operando.cora.begin(), operando.cora.end());
    return resultado;
}

void BigInteger :: substract(BigInteger &restando){
    reverse(this->cora.begin(),this->cora.end());//revierte los numeros para poder operarlos de derecha a izquierda
    reverse(this->cora.begin(),this->cora.end());
    if(cora.size() < restando.cora.size()){
        cora.resize(restando.cora.size());
    }
    else if(cora.size() > restando.cora.size()){
        restando.cora.resize(cora.size());
    }
    vector<int> :: iterator it, at = restando.cora.begin();
    int acum = 0; 
    if(this->signo == restando.signo){
        BigInteger *mayor, *menor;
        bool thisesMayor = true;
        int i = 0;
        while (i < cora.size() && thisesMayor){
            if(cora[i] < restando.cora[i]){
                thisesMayor = false;
            }
        }
        if(thisesMayor){
            mayor = this;
            menor = &restando;
        }
        else{
            mayor = &restando;
            menor = this;
        }
        for(it = cora.begin(); it != cora.end(); ++it){
            *it += acum;
            if(*it-*at<0){
                acum = -1;
                *it += 10;
            }
            else{
                acum = 0;
            }
            *it = *it - *at;
        }
        if(acum != 0){
            this->cora.push_back(acum);
        }
    }
    if(this->signo!=restando.signo){
        this->add(restando);
    }
    reverse(this->cora.begin(),this->cora.end());
    reverse(this->cora.begin(),this->cora.end());

}


void BigInteger :: quotient(BigInteger &divisor){
    BigInteger cu;
    cu.cora = this->cora;
    cu.signo = this->signo;
    if(cu < divisor){ //si el numero e menor que el denominar la division debe retornar 0;
        vector<int> cero;
        cero.push_back(0);
        this->cora = cero;
        this->signo= false;
    }
}

bool BigInteger :: operator<(BigInteger &min){
    bool esMenor;
    if((signo == false && min.signo == true)){ //primero positivo, segundo negativo retorna false
        esMenor = false;
    }
    else if(signo == true && min.signo == false){//primero negativo, segundo positivo retorna true
        esMenor = true;
    }
    else if(signo == false && min.signo == false){//ambos positivos, retorna true si el primero es menor
        if(cora.size() < min.cora.size()){
            esMenor = true;
        }
        else if(cora.size() > min.cora.size()){
            esMenor = false;
        }
        else{
            bool flag = true;
            int i = 0;
            while(i < cora.size() && flag){
                if(cora[i] > min.cora[i]){
                    flag = false;
                }
            }
            if(flag){
                esMenor = true;
            }
            else{
                esMenor = false;
            }
        }
    }
    else if(signo == true && min.signo == true){//ambos negativos, retorna true si el primero es mayor
        if(cora.size() > min.cora.size()){
            esMenor = true;
        }
        else if(cora.size() < min.cora.size()){
            esMenor = false;
        }
        else{
            bool flag = true;
            int i = 0;
            while(i < cora.size() && flag){
                if(cora[i] < min.cora[i]){
                    flag = false;
                }
            }
            if(flag){
                esMenor = true;
            }
            else{
                esMenor = false;
            }
        }
    }
    return esMenor;//retorna la variable booleana
}

bool BigInteger :: operator==(BigInteger &cmp){
    bool esIgual;
    if(cora == cmp.cora && signo == cmp.signo)// solo si el vector y signo de ambos objetos son iguales retorna true
        esIgual = true;
    else
        esIgual = false;
    return esIgual;
}

bool BigInteger :: operator<=(BigInteger &minigual){
    BigInteger temp;
    temp.cora = this->cora;
    temp.signo = this->signo;
    bool flag;
    if(temp == minigual || temp < minigual){ //retorna true si primero es igual o menor que el segundo
        flag = true;
    }
    else{
        flag = false;
    }
    return flag;
}
