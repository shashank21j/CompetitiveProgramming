#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin>>s;
	int four = 0;
	if (s[0]=='4') {
		cout<<"NO"<<endl;
		return 0;
	}
	for (int i=0;i<s.length();i++) {
		if (s[i] != '1' && s[i]!='4') {
			cout<<"NO"<<endl;
			return 0;
		}
		if (s[i] == '4') {
			four++;
			if (four>2) {
				cout<<"NO"<<endl;
				return 0;		
			}
		}
		else {
			four = 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}