#include <bits/stdc++.h> 

using namespace std;

int main() {
	char dir;
	string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string res = "";
	cin>>dir;
	string s;
	cin>>s;
	if (dir == 'R') {
		for (int i=0;i<s.length();i++) {
			for (int j = 1;j<a.length();j++) {
				if (a[j] == s[i]) {
					res+=a[j-1];
				}
			}
		}
	}
	else if (dir == 'L') {
		for (int i=0;i<s.length();i++) {
			for (int j = 0;j<a.length()-1;j++) {
				if (a[j] == s[i]) {
					res+=a[j+1];
				}
			}
		}
	}
	cout<<res<<endl;
	return 0;
}