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
	while (1) {
		ISTREAM>>a>>b;
		if (a == 0 && b == 0) {
			break;
		}
		cout<<a+b<<endl;
	}
	return 0;
}