#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	string t;
	string p ="";
	cin>>s>>t;
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != t[i]) count++;
	}
	if (count%2 == 1) cout<<"impossible"<<endl;
	else {
		count/=2;
		for (int i = 0;i < s.length(); i++) {
			if (count>0 && s[i]!=t[i]) {
				p+=t[i];
				count--;
			}
			else {
				p+=s[i];
			}
		}
		cout<<p<<endl;
	}
	return 0;
}