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
		for (int i = 0;i<n ; i++ ) {
			for (int j = 0;j<n-1;j++) {
				for (int k = 0;k<3 - digicnt(min(min(i,j)+1,min(n-i,n-j)));k++ ) cout<<" ";
				cout<<min(min(i,j)+1,min(n-i,n-j))<<" ";
			}
			cout<<"  1"<<endl;
		}
		cout<<endl;
		cin>>n;
	}
	return 0;
}