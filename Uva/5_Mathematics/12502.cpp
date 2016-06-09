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
	int a,b,c;
	for (int i = 0; i < n; i++) {
		ISTREAM>>a>>b>>c;
		int temp = (c*(2* max(a,b) - min(a,b)))/(a+b);
		if (a < b) {
			cout<<max(0,c - temp)<<endl;
		}
		else {
			cout<<temp<<endl;
		}
	}
	return 0;
}