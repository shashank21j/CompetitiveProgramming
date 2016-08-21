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
	int a,b;
	ISTREAM>>a>>b;
	if (a>b) swap(a,b);
	int sum = 0;
	for (int i=a;i<=b;i++) {
		if (i%13!=0) sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}