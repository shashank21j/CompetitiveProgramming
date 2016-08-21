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
	int x1,y1,x2,y2;
	while (1) {
		ISTREAM>>x1>>y1>>x2>>y2;
		if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
			break;
		}
		if (y1 == y2 && x1 == x2) cout<<0<<endl;
		else if (abs (y1 - y2) == abs(x1 - x2)) cout<<1<<endl;
		else if (x1 == x2 || y1==y2) cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}