#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <double> a(3);
	for (int i=0;i<3;i++) {
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	if (a[0] + a[1]<= a[2]) {
		cout<<"NAO FORMA TRIANGULO"<<endl;
	}
	else {
		if ( abs(a[0]*a[0] + a[1]*a[1] - a[2]*a[2]) <0.00001 ) {
			cout<<"TRIANGULO RETANGULO"<<endl;
		}
		else if (a[0]*a[0] + a[1]*a[1] - a[2]*a[2] <0) {
			cout<<"TRIANGULO OBTUSANGULO"<<endl;
		}
		else if (a[0]*a[0] + a[1]*a[1] - a[2]*a[2] >0) {
			cout<<"TRIANGULO ACUTANGULO"<<endl;
		}
		if (a[0] == a[2]) {
			cout<<"TRIANGULO EQUILATERO"<<endl;
		}
		else if (a[0] == a[1] || a[1] == a[2] ) {
			cout<<"TRIANGULO ISOSCELES"<<endl;
		}
	}
	return 0;
}