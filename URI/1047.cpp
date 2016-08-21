#include <bits/stdc++.h>
using namespace std;
int main() {
	int h1,m1,m;
	cin>>h1>>m1;
	m = h1*60 + m1;
	int h2,m2,m3;
	cin>>h2>>m2;
	m3 = h2*60 + m2;
	int diff = m3 - m;
	if (diff <0 ){
		diff += 24*60;
	}
	int h = diff/60;
	m = diff%60;
	cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
	return 0;
}