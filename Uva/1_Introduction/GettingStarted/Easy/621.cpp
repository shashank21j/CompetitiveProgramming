#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	ISTREAM>>n;
	string s;
	for (int i = 0; i < n; i++) {
		ISTREAM>>s;
		int l = s.length();
		if (s == "4" || s == "78" || s=="1") cout<<"+"<<endl;
		else if (s[l-1] == '5' && s[l-2] == '3') cout<<"-"<<endl;
		else if (s[0] == '9' && s[l-1] == '4') cout<<"*"<<endl;
		else if (s[0] == '1' && s[1] == '9' && s[2] == '0') cout<<"?"<<endl;
	}
	return 0;
}