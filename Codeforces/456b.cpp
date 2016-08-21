#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	if (s.length() == 1) {
		int n = s[0] - 48;
		if (n%4 == 0) cout<<"4\n";
		else cout<<"0\n";
	}
	else {
		int a = s[s.length()-1] - 48;
		int b = s[s.length()-2] - 48;
		if ((b*10 + a)%4 == 0) cout<<"4\n";
		else cout<<"0\n";
	}
	return 0;
}