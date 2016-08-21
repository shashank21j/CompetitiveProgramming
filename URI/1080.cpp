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
	int maxi = -9;
	int temp;
	int pos = -1;
	for (int i = 0; i < 100; i++) {
		ISTREAM>>temp;
		if (temp>maxi) {
			maxi = temp;
			pos = i+1;
		}
	}
	cout<<maxi<<endl;
	cout<<pos<<endl;
	return 0;
}