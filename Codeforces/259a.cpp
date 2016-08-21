#include <bits/stdc++.h>
using namespace std;
int main() {
	string s[8];
	for (int i=0;i<8;i++) {
		cin>>s[i];
	}
	int W = 0, B = 0;
	for (int i=0;i<8;i++) {
		int flag;
		if (s[i][0] == 'B') {
			flag = 1;
		}
		else {
			flag = 0;
		}
		for (int j=1;j<8;j++) {
			if ((j+flag)%2 == 0 && s[i][j] != 'W') {
				cout<<"NO"<<endl;
				return 0;
			}
			else if ((j+flag)%2 == 1 && s[i][j] != 'B') {
				cout<<"NO"<<endl;
				return 0;	
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}