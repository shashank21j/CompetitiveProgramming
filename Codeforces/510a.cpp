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
	int n,m;
	ISTREAM>>n>>m;
	for (int i= 0; i < n; i++) {
		if (i%2 == 0) {
			for (int j = 0;j < m; j++ ) {
				cout<<"#";
			}
			cout<<endl;
		}
		else {
			if (i%4 == 1) {
				for (int j = 0;j < m - 1; j++) {
					cout<<".";
				}
				cout<<"#"<<endl;
			}
			else {
				cout<<"#";
				for (int j = 0;j < m - 1; j++) {
					cout<<".";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}