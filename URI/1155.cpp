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
	double S = 0;
	for (int i = 1; i < 101; i++) {
		S += 1.0/i;
	}
	cout<<fixed<<setprecision(2);
	cout<<S<<endl;
	return 0;
}