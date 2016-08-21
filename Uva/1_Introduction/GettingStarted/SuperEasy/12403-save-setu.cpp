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
	int sum = 0;
	int t;
	string s;
	for (int i = 0; i < n; i++) {
		ISTREAM>>s;
		if (s == "donate") {
			ISTREAM>>t;
			sum+= t;
		}
		else if (s == "report") {
			cout<<sum<<endl;
		}

	}
	return 0;
}
