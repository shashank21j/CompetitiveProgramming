#include<bits/stdc++.h> 

using namespace std;

int main() {
	int flag0=0,flag1=0;
	string s;
	cin>>s;
	int zc = 0,nc = 0;
	for (int i=0;i<s.length();i++) {
		if (s[i] == '0' && flag0==1) {
			zc++;
		}
		else if (s[i] == '0' && flag0==0) {
			zc = 1;
			nc = 0;
			flag0 = 1;
			flag1 = 0;
		}
		else if (s[i] == '1' && flag1==1) {
			nc++;
		}
		else if (s[i] == '1' && flag1==0) {
			nc = 1;
			zc = 0;
			flag0 = 0;
			flag1 = 1;
		}
		if (zc == 7 || nc == 7) break;
	}
	if (zc == 7 || nc == 7) {
		cout<<"YES\n";
	}
	else cout<<"NO\n";
	return 0;
}