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
	int h1,m1,h2,m2;
	while (1) {
		ISTREAM>>h1>>m1>>h2>>m2;
		if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
			break;
		}
		int t1 = h1 * 60 + m1;
		int t2 = h2*60 + m2;
		if (t2 - t1 < 0) {
			cout<<t2 - t1 + 24*60<<endl;
		}
		else {
			cout<<t2 - t1<<endl;
		}
	}
	return 0;
}