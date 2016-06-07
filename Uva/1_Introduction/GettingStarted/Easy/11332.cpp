#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int g(int n) {
	if (n<10) return n;
	int t = 0;
	while(n!=0) {
		t+=n%10;
		n/=10;
	}
	return g(t);
}
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	while (1) {
		ISTREAM>>n;
		if (n == 0) {
			break;
		}
		cout<<g(n)<<endl;
	}
	return 0;
}