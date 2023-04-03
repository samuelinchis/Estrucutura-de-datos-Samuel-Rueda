#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

char simbo [] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
                'R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7',
                '8','9','.',',','?','\'','!','/','(',')','&',':',';','=','+','-','_',
                '"','@'};
string ptos [] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
                          ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--",
                          "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", ".--.-."};


int indx(string &message);

int main ()
{   

    int tCases;
    cin >> tCases;
    string message;
    for(int i = 0; i < tCases; ++i){
        getline(cin,message);
        cin.ignore();
        cout<< "mensaje #"<< i+1<<endl;
        indx(message);
        printf("\n"); //imprime un salto de linea que separa mensajes distintos
    }
    return 0;
}

int indx(string &message)
{
    char espacio = ' ' ;
    string mLetter;
    int j=0;
    for(int i=0; i < message.length()+1; ++i){ //recorre todo el mensaje morse
        mLetter[j] = message[i]; //copia simbolo por simbolo en la variable mLetter
        ++j;
        if (message[i] == espacio){//Cuando encuentra un espacio para
            cout<<mLetter;
            if(message[i+1]==espacio){
                cout<<" ";
                i = i+2;
            }
            mLetter.pop_back(); //borra el espacio que acabo de agregar al string.
            for(int k=0; k<53; ++k){
                if (ptos[k]==mLetter){//busca si la letra esta dentro de los codigos morse
                    cout<<simbo[k];//imprime la letra correspondiente al cod morse
                    k=53;
                }
            } 
             
            mLetter = " "; //limpia la variable mLetter para ingresar la siguiente cadena
            j = 0; // reinicia j para agregar los caracteres de la posicion 0 de mLetter
        }    
    }
    return 0;
}
