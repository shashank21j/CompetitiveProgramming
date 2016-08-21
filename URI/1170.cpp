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
	double temp;
	for (int i = 0; i < n; i++) {
		ISTREAM>>temp;
		int cnt = 0;
		while(temp>1) {
			temp/=2;
			cnt++;
		}
		cout<<cnt<<" dias"<<endl;
	}
	return 0;
}