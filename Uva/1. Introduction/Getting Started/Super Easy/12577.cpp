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
	int cnt = 0;
	while(1) {
		ISTREAM>>s;
		cnt++;
		if (s == "*") {
			break;
		}
		if (s == "Hajj") cout<<"Case "<<cnt<<": Hajj-e-Akbar"<<endl;
		else if (s == "Umrah") cout<<"Case "<<cnt<<": Hajj-e-Asghar"<<endl;
	}
	return 0;
}