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
	int a,n;
	ISTREAM>>a>>n;
	while(n<=0) ISTREAM>>n;
	int sum = a;
	for (int i = a+1; i < a+n; i++) {
		sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}