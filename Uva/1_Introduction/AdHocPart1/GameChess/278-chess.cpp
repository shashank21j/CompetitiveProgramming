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
	int N;
	ISTREAM>>N;
	int n;
	int m;
	char c;
	for (int i = 0; i < N; i++) {
		ISTREAM>>c>>m>>n;
		if (c == 'r' || c == 'Q') {
			cout<<min(n,m)<<endl;
		}
		else if (c == 'K') {
			cout<<(n/2 + n%2) * (m/2 + m%2)<<endl;
		}
		else if (c == 'k') {
			cout<<(n*m)/2 + (m*n)%2<<endl;
		}
	}
	return 0;
}
