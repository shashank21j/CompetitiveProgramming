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
	int n;
	ISTREAM>>n;
	n+= (int)(n%2 == 0);
	for (int i = n; i < n+12; i+=2) {
		cout<<i<<endl;
	}
	return 0;
}