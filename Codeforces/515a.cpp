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
	int a,b,s;
	ISTREAM>>a>>b>>s;
	int steps =  s - (abs(a)+abs(b));
	if (steps >= 0 && steps%2 == 0) {
		cout<<"Yes"<<endl;
	}
	else {
		cout<<"No"<<endl;
	}
	return 0;
}