#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <string> s(n);
	for (int i=0;i<n;i++) {
		cin>>s[i];
	}
	char a = s[0][0];
	char b = s[0][1];
	if (a == b) {
		cout<<"NO"<<endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ( (i == j || (i+j)%(n-1) == 0) && s[i][j] != a ) {
				cout<<"NO"<<endl;
				return 0;
			}
			else if ( (i != j && (i+j)%(n-1) != 0 ) && s[i][j]!=b) {
				cout<<"NO"<<endl;
				return 0;
			} 
		}
	}
	cout<<"YES"<<endl;
	return 0;
}