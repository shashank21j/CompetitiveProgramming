#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin>>s;
	int flag =0;
	for (int i=0;i<s.length();i++) {
		if (flag == 0 && s[i] == 'h') flag++;
		else if (flag == 1 && s[i] == 'e') flag++;
		else if (flag == 2 && s[i] == 'l') flag++;
		else if (flag == 3 && s[i] == 'l') flag++;
		else if (flag == 4 && s[i] == 'o') flag++;
	}
	if (flag == 5 ) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}