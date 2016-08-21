#include <bits/stdc++.h>
using namespace std;
int digicnt (int n) {
	int cnt = 0;
	while (n!= 0) {
		n/=10;
		cnt++;
	}
	return cnt;
}
int main() {
	int n;
	cin>>n;
	while(n) {
		for (int i = 0;i<n;i++ ) {
			for (int j = i+ 1;j > 1; j-- ) {
				for (int k = 0;k<3-digicnt(j);k++) cout<<" ";
				cout<<j<<" ";
			}
			for (int j = 1 ;j < n - i; j++ ) {
				for (int k = 0;k<3-digicnt(j);k++) cout<<" ";
				cout<<j<<" ";	
			}
			for (int k = 0;k<3-digicnt(n - i);k++) cout<<" ";
			cout<<n-i<<endl;
		}
		cout<<endl;
		cin>>n;
	}
	return 0;
}