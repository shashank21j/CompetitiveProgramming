#include <bits/stdc++.h>

using namespace std;

bool isPrime ( int n) {
	bool flag = true;
	for (int i=2; ; i++) {
		if ( i*i>n ) {
			break;
		}
		if (n % i == 0 ) {
			return false;
		}
	}
	return flag;
}

int main() {
	int n;
	cin>>n;
	if ( n%2 == 0 ) {
		cout<<"4 "<<n-4<<endl;
	}
	else if (n%3 == 0) {
		cout<<"6 "<<n - 6<<endl;
	}
	else {
		if (isPrime(n-8) ) {
			cout<<"9 "<<n-9<<endl;
		}
		else {
			cout<<"8 "<<n-8<<endl;
		}
	}
	return 0;
}