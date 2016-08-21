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
	int temp;
	for (int i = 0; i < n; i++) {
		ISTREAM>>temp;
		if (temp == 0) {
			cout<<"NULL"<<endl;
			continue;
		}
		if (temp%2==0) {
			cout<<"EVEN ";
		}
		else {
			cout<<"ODD ";
		}
		if (temp<0) {
			cout<<"NEGATIVE"<<endl;
		}
		else {
			cout<<"POSITIVE"<<endl;
		}
	}
	return 0;
}