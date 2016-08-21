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
	int j = 7;
	for (int i = 1; i < 10; i+=2) {
		cout<<"I="<<i<<" J="<<j<<endl;
		cout<<"I="<<i<<" J="<<j-1<<endl;
		cout<<"I="<<i<<" J="<<j-2<<endl;
		j+=2;
	}
	return 0;
}