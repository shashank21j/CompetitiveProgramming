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
	while (1) {
		ISTREAM>>s;
		cnt++;
		if (s == "#") break;
		if (s == "HELLO") cout<<"Case "<<cnt<<": ENGLISH"<<endl;
		else if (s == "HOLA") cout<<"Case "<<cnt<<": SPANISH"<<endl;
		else if (s == "HALLO") cout<<"Case "<<cnt<<": GERMAN"<<endl;
		else if (s == "BONJOUR") cout<<"Case "<<cnt<<": FRENCH"<<endl;
		else if (s == "CIAO") cout<<"Case "<<cnt<<": ITALIAN"<<endl;
		else if (s == "ZDRAVSTVUJTE") cout<<"Case "<<cnt<<": RUSSIAN"<<endl;
		else cout<<"Case "<<cnt<<": UNKNOWN"<<endl;
	}
	return 0;
}