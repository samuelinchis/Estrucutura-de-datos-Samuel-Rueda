/*La complejidad que tiene este codigo es de O(n)*/

#include<string>
#include<vector>
#include<iostream>


using namespace std;

void wordbank(vector<string> &bank);
void puzzleBank(vector<string> &puzzle);


int main(){
    vector<string> bank;
    vector<string> letra;
    wordbank(bank);
    puzzleBank(letra);
    
    return 0;
}

void wordbank(vector<string> &bank){
    string wrd;
    cin >> wrd;
    while(wrd != "#"){
        bank.push_back(wrd);
        cin >> wrd;
    }
    
}

void puzzleBank(vector<string> &puzzle){
    string wrd;
    getline(cin, wrd);
    while(wrd != "#"){
        puzzle.push_back(wrd);
        getline(cin, wrd);
    }
    puzzle.erase(puzzle.begin());
}
