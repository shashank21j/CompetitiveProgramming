#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
long long int fact(long long int n) {
	long long int res = 1;
	if (n == 0) return res;
	for (int i = 1;i <= n;i++) {
		res*=i;
	}
	return res;
}
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	long long int a,b;
	while (scanf("%lld %lld",&a,&b)!=EOF) {
		cout<<fact(a) + fact(b)<<endl;
	}
	return 0;
}