#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >>n;
	for (int i = 0; i < n; i++) {
		for (int j=n-i;j>0;j--) {
			cout<<"  ";
		}
		cout<<"0";
		for (int j=1;j<=i;j++) {
			cout<<" "<<j;
		}
		if (i>0) cout<<" ";
		for (int j=i-1; j>0; j--) {
			cout<<j<<" ";
		}
		if (i>0) cout<<"0";
		cout<<endl;
	}
	for (int i = 0; i <=n ; i++) {
		for (int j = 0; j < i; j++ ) {
			cout<<"  ";
		}
		cout<<"0";
		for (int j = 1; j<=n-i ; j++) {
			cout<<" "<<j;
		}
		if (i<n) cout<<" ";
		for (int j = n-i-1 ; j>0 ; j--) {
			cout<<j<<" ";
		}
		if (n-i>0) cout<<"0";
		cout<<endl;
	}
	return 0;
}