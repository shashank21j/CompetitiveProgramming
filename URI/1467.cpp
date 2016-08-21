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
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF) {
		if (a != b && a!= c) {
			cout<<"A"<<endl;
		}
		else if (b != a && b!= c) {
			cout<<"B"<<endl;
		}
		else if (c != a && c!=b) {
			cout<<"C"<<endl;
		}
		else {
			cout<<"*"<<endl;
		}
	}
	return 0;
}