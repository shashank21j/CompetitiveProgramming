#include <bits/stdc++.h>

using namespace std;
int main() {
	string s;
	cin>>s;
	int it = 0;
	int i;
	for (i=0;i<s.length();i++) {
		if (s[i]=='0') {
			it = i;
			break;
		}
	}
	for (i=0;i<s.length();i++) {
		if (i == it) continue;
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}