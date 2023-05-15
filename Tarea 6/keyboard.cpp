/*La complejidad de este codigo es de O(n)*/
#include<iostream>
#include<string>
#include<list>

using namespace std;

void read(bool &ind, char &letra);

int main(){
	bool flag = true;
	string message;
	list<char> key;
	cin >> message;
	for(int i=0; i < message.length(); ++i){
		read(flag,message[i]);
		if(flag == true){
			key.push_back(message[i]);
		}
		else
			key.push_front(message[i]);
	}
	list<char>:: iterator it;
	for(it= key.begin(); it != key.end() ; ++it)
		cout << *it;
	
	
return 0;
}

void read(bool &ind, char &letra){
	if(letra == '['){
		ind = false;

	}
	else if (letra == ']'){
		ind = true;
		
	}
	
}
