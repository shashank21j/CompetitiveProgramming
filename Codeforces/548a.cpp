#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int k;
	cin>>s>>k;
	int n = s.length()/k;
	if (s.length()%k!=0) {
		cout<<"NO"<<endl;
		return 0;
	}
	int flag = 0;
	for (int i = 0;i<k;i++) {
		int ix = i*n;
		for (int j = ix; j < ix + n; j++) {
			if (s[j]!=s[ix+n-(j-ix)-1]) {
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}