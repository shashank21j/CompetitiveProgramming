#include <bits/stdc++.h>

using namespace std;
int main() {
	string s;
	string t;
	cin>>s>>t;
	int h1 = (s[0]-48)*10 + (s[1]- 48);
	int m1 = (s[3]-48)*10 + (s[4]- 48);
	int h2 = (t[0]-48)*10 + (t[1]- 48);
	int m2 = (t[3]-48)*10 + (t[4]- 48);
	int h = h1 - h2;
	int m = m1 - m2;
	if (m<0) {
		m = 60 + m;
		h--;
	}
	if (h<0) {
		h = 24+h;
	}
	if (h<10) cout<<"0";
	cout<<h<<":";
	if (m<10) cout<<"0";
	cout<<m<<endl;
	return 0;
}