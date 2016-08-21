#include <bits/stdc++.h> 

using namespace std;

int main() {
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	for (int i=0;i<s1.length();i++) {
		if (s1[i] != s2[s2.length()-1-i]) {
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}