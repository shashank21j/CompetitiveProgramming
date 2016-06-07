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
	int temp;
	int cnt = 0;
	while(1) {
		ISTREAM>>n;
		if (n == 0) {
			break;
		}
		cnt++;
		int z = 0;
		int p = 0;
		for (int i = 0; i < n; i++) {
			ISTREAM>>temp;
			if (temp == 0) {
				z++;
			}
			else p++;
		}
		cout<<"Case "<<cnt<<": "<<p - z<<endl;
	}
	return 0;
}