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
	int i = 1,j = 60;
	while (j>=0) {
		cout<<"I="<<i<<" J="<<j<<endl;
		j-=5;
		i+=3;
	}
	return 0;
}