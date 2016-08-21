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
	int a;
	int b;
	cin>>a;
	cin>>b;
	while (b<=a) cin>>b;
	int cnt = 0;
	int sum = 0;
	while (sum<b) {
		sum+=a;
		a++;
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
