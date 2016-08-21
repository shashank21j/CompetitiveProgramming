#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	if (s == "vertebrado") {
		cin>>s;
		if (s == "ave") {
			cin>>s;
			if (s == "carnivoro") {
				cout<<"aguia"<<endl;
			}
			else if (s == "onivoro") {
				cout<<"pomba"<<endl;
			}
		}
		else if (s == "mamifero") {
			cin>>s;
			if (s == "herbivoro") {
				cout<<"vaca"<<endl;
			}
			else if (s == "onivoro") {
				cout<<"homem"<<endl;
			}
		}
	}
	else if (s == "invertebrado") {
		cin>>s;
		if (s == "inseto") {
			cin>>s;
			if (s == "hematofago") {
				cout<<"pulga"<<endl;
			}
			else if (s == "herbivoro") {
				cout<<"lagarta"<<endl;
			}
		}
		else if (s == "anelideo") {
			cin>>s;
			if (s == "hematofago") {
				cout<<"sanguessuga"<<endl;
			}
			else if (s == "onivoro") {
				cout<<"minhoca"<<endl;
			}
		}
	}
	return 0;
}