#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	if (s.length() < 11) {
		cout<<"NO"<<endl;
		return 0;
	}
	for (int i = 0; i < 11; i++) {
		string t = "";
		for (int j = 0; j < i; j++) {
			t += s[j];
		}
		for (int j = s.length()- (10- i); j < s.length(); j++) {
			t+=s[j];
		}
		if (t == "CODEFORCES") {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}