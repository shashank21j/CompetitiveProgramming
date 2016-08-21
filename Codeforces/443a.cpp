#include <bits/stdc++.h>

using namespace std;

int main () { 
	set <char> check;
	string s;
	getline(cin,s);
	for (int i=0;i<s.length();i++) {
		if (s[i]>='a' && s[i]<='z') check.insert(s[i]);
	}
	cout<<check.size()<<endl;
	return 0;
}