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
		if (a == -1 && b == -1) break;
		if (a>b) swap(a,b);
		cout<<min(b - a,a - b + 100)<<endl;
	}
	return 0;
}