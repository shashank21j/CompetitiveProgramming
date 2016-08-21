#include <bits/stdc++.h>
using namespace std;
int main() {
	string s[8] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
	string inp;
	int n;
	cin>>n;
	cin>>inp;
	for (int i=0;i<8;i++) {
		int flag = 0;
		if (s[i].length() != n) continue;
		for (int j = 0;j<n;j++) {
			if (inp[j] == '.') continue;
			if (inp[j] != s[i][j]) {
				flag = 1;
				break;
			}
		}
		if (flag ==0 ) {
			cout<<s[i]<<endl;
			return 0;
		}
	}
	return 0;
}