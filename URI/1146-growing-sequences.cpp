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
	while (n) {
		for (int i=1;i<n;i++) cout<<i<<" ";
		cout<<n<<endl;
		ISTREAM>>n;
	}
	return 0;
}
