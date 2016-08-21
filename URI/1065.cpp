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
	int temp;
	int cnt=0;
	for (int i = 0; i < 5; i++) {
		ISTREAM>>temp;
		if (temp%2==0) {
			cnt++;
		}
	}
	cout<<cnt<<" valores pares"<<endl;
	return 0;
}