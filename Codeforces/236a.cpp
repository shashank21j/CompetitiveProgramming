#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin>>s;
	set <char> check;
	for (int i=0;i<s.length(); i++) {
		check.insert(s[i]);
	}
	if (check.size()%2==1) cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";
	return 0;
}