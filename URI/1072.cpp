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
	int in = 0;
	int out = 0;
	int temp;
	for (int i=0;i<n;i++) {
		ISTREAM>>temp;
		if (temp>= 10 && temp<=20) {
			in++;
		}
		else out++;
	}
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
	return 0;
}