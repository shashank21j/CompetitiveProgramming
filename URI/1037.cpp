#include <bits/stdc++.h>
using namespace std;
int main() {
	float a;
	cin>>a;
	if (a>= 0 && a<= 25.0) cout<<"Intervalo [0,25]\n";
	else if (a>25 && a<= 50.0) cout<<"Intervalo (25,50]\n";
	else if (a>50 && a<= 75.0) cout<<"Intervalo (50,75]\n";
	else if (a>75 && a<= 100.0) cout<<"Intervalo (75,100]\n";
	else cout<<"Fora de intervalo\n";
	return 0;
}