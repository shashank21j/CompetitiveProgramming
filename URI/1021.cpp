#include <bits/stdc++.h>
using namespace std;
int main() {
	double a;
	cin>>a;
	int b = (int)a;
	cout<<"NOTAS:"<<endl;
	if (b>=100) {
		cout<<b/100<<" nota(s) de R$ 100.00"<<endl;
		b%=100;
	}
	else cout<<"0 nota(s) de R$ 100.00"<<endl;
	if (b>=50) {
		cout<<b/50<<" nota(s) de R$ 50.00"<<endl;
		b%=50;
	}
	else cout<<"0 nota(s) de R$ 50.00"<<endl;
	if (b>=20) {
		cout<<b/20<<" nota(s) de R$ 20.00"<<endl;
		b%=20;
	}
	else cout<<"0 nota(s) de R$ 20.00"<<endl;
	if (b>=10) {
		cout<<b/10<<" nota(s) de R$ 10.00"<<endl;
		b%=10;
	}
	else cout<<"0 nota(s) de R$ 10.00"<<endl;
	if (b>=5) {
		cout<<b/5<<" nota(s) de R$ 5.00"<<endl;
		b%=5;
	}
	else cout<<"0 nota(s) de R$ 5.00"<<endl;
	if (b>=2) {
		cout<<b/2<<" nota(s) de R$ 2.00"<<endl;
		b%=2;
	}
	else cout<<"0 nota(s) de R$ 2.00"<<endl;
	cout<<"MOEDAS:"<<endl;
	if (b>=1) {
		cout<<b/1<<" moeda(s) de R$ 1.00"<<endl;
		b%=1;
	}
	else cout<<"0 moeda(s) de R$ 1.00"<<endl;
	b = (a*100 - (int)a*100);

	if (b>=50) {
		cout<<b/50<<" moeda(s) de R$ 0.50"<<endl;
		b%=50;
	}
	else cout<<"0 moeda(s) de R$ 0.50"<<endl;
	if (b>=25) {
		cout<<b/25<<" moeda(s) de R$ 0.25"<<endl;
		b%=25;
	}
	else cout<<"0 moeda(s) de R$ 0.25"<<endl;
	if (b>=10) {
		cout<<b/10<<" moeda(s) de R$ 0.10"<<endl;
		b%=10;
	}
	else cout<<"0 moeda(s) de R$ 0.10"<<endl;
	if (b>=5) {
		cout<<b/5<<" moeda(s) de R$ 0.05"<<endl;
		b%=5;
	}
	else cout<<"0 moeda(s) de R$ 0.05"<<endl;
	if (b>=1) {
		cout<<b<<" moeda(s) de R$ 0.01"<<endl;
		b%=1;
	}
	else cout<<"0 moeda(s) de R$ 0.01"<<endl;
	return 0;
}