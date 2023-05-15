/*complejidad: O(nlogn)*/
#include<map>
#include<iostream>
#include<list>
#include<utility>

using namespace std;

void fill(int &population, int &operation, list<pair<int,int>> &l, map<int,int> &map);
void mod(list<pair<int,int>> &l, map<int,int> &map, char &letra, int &num);

int main(){
	
	int p;
	int c;
	char letra;
	int num;
	list<pair<int,int>> ans;
	map<int,int> m;
	cin >> p >> c;
	while(p != 0 && c!=0){
		int casos = 1;
		fill(p, c, ans, m);
		
		for(int i = 0 ; i < c; ++i){
			scanf("%c %d", &letra, &num);
			mod(ans, m, letra, num);
		}
		cin >> p >> c;
	}
	return 0;
}


void fill(int &population, int &operation, list<pair<int,int>> &l, map<int,int> &map){
	if(population>operation){
		for(int i = 0 ; i < operation ; ++i){
			map[i] = 0;
			l.push_back(make_pair(i,0));
		}
	}
	else
		for(int i = 0; i < population; ++i){
			map[i] = i;
			l.push_back(make_pair(i,0));
		}

}

void mod(list<pair<int,int>> &l, map<int,int> &map, char &letra, int &num){
	if(letra  == 'N'){
				if(l.front().second == map[num]){
					cout << l.front().first << endl;
					l.push_back(l.front());
					l.pop_front();
				}
				else{
					l.pop_front();
				}
			}
			else{
				if(map.find(num) != map.end())
					map[num]++;
				
				else
					map[num] = 0;
				pair<int,int> newPair(num,map[num]);
				l.push_front(make_pair(newPair.first,newPair.second));
			}
}