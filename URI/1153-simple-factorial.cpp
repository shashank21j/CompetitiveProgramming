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
	cin>>n;
	int res = 1;
	for (int i = n;i>=1;i--) res*=i;
	cout<<res<<endl;
	return 0;
}
