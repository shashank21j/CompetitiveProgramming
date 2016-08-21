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
	double S = 0.0;
	double i=1.0;
	double j=1.0;
	while (i<=39) {
		S+=i/j;
		i+=2;
		j*=2;
	}
	cout<<fixed<<setprecision(2);
	cout<<S<<endl;
	return 0;
}