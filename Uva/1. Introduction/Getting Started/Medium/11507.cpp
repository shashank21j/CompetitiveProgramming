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
	int N;
	while(1) {
		ISTREAM>>N;
		if (N == 0) break;
		string s = "+x";
		string n;
		for (int i = 0; i < N-1; i++) {
			//cout<<s<<endl;
			ISTREAM>>n;
			if (n == "No") {
				continue;
			}
			else if (s[1] == 'x') {
				s[1] = n[1];
				if (n[0] != s[0]) s[0] = '-';
				else s[0] = '+';
			}
			else if (s[1] == n[1]) {
				s[1] = 'x';
				if (n[0] != s[0]) s[0] = '+';
				else s[0] = '-';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}