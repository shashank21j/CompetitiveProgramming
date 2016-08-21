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
	int t;
	int s;
	for (int i = 0; i < n; i++) {
		ISTREAM>>t;
		int max = -1;
		for (int j = 0; j < t; j++) {
			ISTREAM>>s;
			if (s>max) max = s;
		}
		cout<<"Case "<<i+1<<": "<<max<<endl;
	}
	return 0;
}