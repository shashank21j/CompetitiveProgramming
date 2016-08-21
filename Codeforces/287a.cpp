#include <bits/stdc++.h>
using namespace std;
int main() {
	string s[4];
	for (int i=0;i<4;i++) {
		cin>>s[i];
	}
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			int black = 0;
			int blank = 0;
			if (s[i][j] == '#') black++;
			else blank++;
			if (s[i][j+1] == '#') black++;
			else blank++;
			if (s[i+1][j] == '#') black++;
			else blank++;
			if (s[i+1][j+1] == '#') black++;
			else blank++;
			if (black >= 3 || blank >= 3) {
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}