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
	float a,b,c;
	cout<<fixed<<setprecision(1);
	for (int i = 0; i < n; i++) {
		ISTREAM>>a>>b>>c;
		cout<<(2*a + 3*b + 5*c)/10<<endl;
	}
	return 0;
}