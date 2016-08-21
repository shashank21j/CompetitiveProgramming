#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int flag = 1;
	int i,j,del;
	for (del = 1; del<=25;del++) {
		for (i = 0;i<s.length();i++) {
			flag = 1;
			for (j = 0;j<5;j++) {
				if (i + j*del>= s.length()) {
					flag = 0;
					break;
				}
				if (s[i + j*del] == '.') {
					flag = 0;
					break;
				}
			}
			if (flag == 1) {
				cout<<"yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"no"<<endl;
	return 0;
}