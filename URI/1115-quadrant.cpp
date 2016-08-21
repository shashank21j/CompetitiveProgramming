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
	while (a!=0 && b!=0) {
		if (a>0 && b>0 ) cout<<"primeiro"<<endl;
		else if (a<0 && b<0) cout<<"terceiro"<<endl;
		else if (a>0 && b<0) cout<<"quarto"<<endl;
		else if (a<0 && b>0) cout<<"segundo"<<endl;
		ISTREAM>>a>>b;
	}
	return 0;
}