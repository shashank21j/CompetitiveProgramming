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
	string s;
	ISTREAM>>s;
	if (s[0] != '9' && (9 - (s[0]-48)) < (s[0] - 48) ) {
		s[0] = 48 + '9' - s[0];
	}
	for (int i = 1; i < s.length();i++) {
		if ((9 - (s[i]-48)) < (s[i] - 48)) {
			s[i] = 48 + '9' - s[i];		
		}
	}
	cout<<s<<endl;
	return 0;
}