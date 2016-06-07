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
	for (int i = 0; i < n; i++) {
		int t;
		int a,b;
		ISTREAM>>t;
		if (t<=0) {
			cout<<"no"<<endl<<endl;
			continue;
		}
		ISTREAM>>a>>b;
		int temp = a - b;
		int flag = 0;
		for (int j = 1; j < t; j++) {
			ISTREAM>>a>>b;
			if (a - b!= temp) {
				flag = 1;
			}
		}
		if (flag == 0) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		if (i< n-1) cout<<endl;
	}
	return 0;
}