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
	float a,b;
	cout<<fixed<<setprecision(1);
	for (int i = 0; i < n; i++) {
		ISTREAM>>a>>b;
		if (b == 0) cout<<"divisao impossivel"<<endl;
		else cout<<a/b<<endl;
	}
	return 0;
}