#include <bits/stdc++.h>

using namespace std;
char toLower(char a) {
	if (a <'a') a+=32;
	return a;
}

int main() {
	string a;
	string b;
	cin>>a;
	cin>>b;
	int i=0;
	while (toLower(a[i]) == toLower(b[i])) {
		i++;
		if (i==a.length()) break;
	}
	if (i == a.length()) cout<<"0\n";
	else if (toLower(a[i]) < toLower(b[i]) ) cout<<"-1\n";
	else cout<<"1\n";
	return 0;
}
