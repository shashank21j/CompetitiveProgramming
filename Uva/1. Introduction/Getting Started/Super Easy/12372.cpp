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
	int l,h,w;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		ISTREAM>>l>>h>>w;
		cnt++;
		if (l<=20 && w<= 20 && h<= 20) {
			cout<<"Case "<<cnt<<": good"<<endl;
		}
		else cout<<"Case "<<cnt<<": bad"<<endl;
	}
	return 0;
}