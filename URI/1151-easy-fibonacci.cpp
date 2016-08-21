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
	cin>>n;
	int a = 0;
	int b = 1;
	if (n == 1) cout<<0<<endl;
	else if (n == 2) cout<<"0 1"<<endl;
	else {
		cout<<"0 1 ";
		for (int i = 2;i<n-1;i++) {
			cout<<a+b<<" ";
			int temp = a+b;
			a = b;
			b = temp;
		}
		cout<<a+b<<endl;
	}
	return 0;
}
