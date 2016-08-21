#include <bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b;
	int t1 = 0;
	int t2 = 0;
	int num1 = 0;
	int num2 = 0;
	long long int num = 0;
	for (int i=0;i<a.length();i++) {
		int t = a[i] - 48;
		if ( t != 0 ) {
			t1*=10;
			t1+=t;
		}
		num1*=10;
		num1+=t;
	}

	for (int i=0;i<b.length();i++) {
		int t = b[i] - 48;
		if ( t != 0 ) {
			t2*=10;
			t2+=t;
		}
		num2*=10;
		num2+=t;
	} 
	num = num1 + num2;
	long long int t3 = 0;
	while (num!=0) {
		int t = num%10;
		if (t != 0) {
			t3*=10;
			t3+=t;
		}
		num/=10;
	}
	num = t3;
	t3 = 0;
	while (num!=0) {
		t3*=10;
		t3+=num%10;
		num/=10;
	}
	if (t1 + t2 == t3) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}