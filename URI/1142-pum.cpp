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
	int counter = 1;
	for (int i=0;i<n;i++) {
		cout<<counter<<" "<<counter+1<<" "<<counter+2<<" PUM"<<endl;
		counter+=4;
	}
	return 0;
}
