#include <bits/stdc++.h>
using namespace std;
int main() {
	int b;
	cin>>b;
	cout<<b<<endl;
	if (b>=100) {
		cout<<b/100<<" nota(s) de R$ 100,00"<<endl;
		b%=100;
	}
	else cout<<"0 nota(s) de R$ 100,00"<<endl;
	if (b>=50) {
		cout<<b/50<<" nota(s) de R$ 50,00"<<endl;
		b%=50;
	}
	else cout<<"0 nota(s) de R$ 50,00"<<endl;
	if (b>=20) {
		cout<<b/20<<" nota(s) de R$ 20,00"<<endl;
		b%=20;
	}
	else cout<<"0 nota(s) de R$ 20,00"<<endl;
	if (b>=10) {
		cout<<b/10<<" nota(s) de R$ 10,00"<<endl;
		b%=10;
	}
	else cout<<"0 nota(s) de R$ 10,00"<<endl;
	if (b>=5) {
		cout<<b/5<<" nota(s) de R$ 5,00"<<endl;
		b%=5;
	}
	else cout<<"0 nota(s) de R$ 5,00"<<endl;
	if (b>=2) {
		cout<<b/2<<" nota(s) de R$ 2,00"<<endl;
		b%=2;
	}
	else cout<<"0 nota(s) de R$ 2,00"<<endl;
	if (b>=1) {
		cout<<b/1<<" nota(s) de R$ 1,00"<<endl;
		b%=1;
	}
	else cout<<"0 nota(s) de R$ 1,00"<<endl;
	return 0;
}