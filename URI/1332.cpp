#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif

int onedist(string s) {
	if (s.length() == 4) return 9;
	int cnt = 0;
	string test = "one";
	for (unsigned int i = 0;i<s.length(); i++) {
		if (s[i]!=test[i]) cnt++;
	}
	return cnt;
}
int twodist(string s) {
	if (s.length() == 4) return 9;
	int cnt = 0;
	string test = "two";
	for (unsigned int i = 0;i<s.length(); i++) {
		if (s[i]!=test[i]) cnt++;
	}
	return cnt;
}
int threedist(string s) {
	if (s.length() == 3) return 9;
	int cnt = 0;
	string test = "three";
	for (unsigned int i = 0;i<s.length(); i++) {
		if (s[i]!=test[i]) cnt++;
	}
	return cnt;
}
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	ISTREAM>>n;
	string s;
	for (int i = 0; i < n; i++) {
		ISTREAM>>s;
		int a = onedist(s);
		int b = twodist(s);
		int c = threedist(s);
		if (min(min(a,b),c) == a) cout<<1<<endl;
		else if (min(min(a,b),c) == b) cout<<2<<endl;
		else if (min(min(a,b),c) == c) cout<<3<<endl;
	}
	return 0;
}