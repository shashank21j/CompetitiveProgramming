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
	int m,n;
	ISTREAM>>m>>n;
	while(m>0 && n>0) {
		int sum = 0;
		if (m>n) swap(m,n);
		for (int i=m;i<n+1;i++) {
			cout<<i<<" ";
			sum += i;
		}
		cout<<"Sum="<<sum<<endl;
		ISTREAM>>m>>n;
	}
	return 0;
}