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
	int n1,n2,k1,k2;
	cin>>n1>>n2>>k1>>k2;
	if (n1<=n2) {
		cout<<"Second"<<endl;
	}
	else {
		cout<<"First"<<endl;
	}
	return 0;
}