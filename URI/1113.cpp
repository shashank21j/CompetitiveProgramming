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
	int a,b;
	ISTREAM>>a>>b;
	while (a!=b) {
		if (a<b) cout<<"Crescente"<<endl;
		else cout<<"Decrescente"<<endl;
		ISTREAM>>a>>b;
	}
	return 0;
}