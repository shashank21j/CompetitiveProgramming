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
	float j = 1;
	for (float i = 0; i <= 2.1; i+=0.2) {
		cout<<"I="<<i<<" J="<<j<<endl;
		cout<<"I="<<i<<" J="<<j+1<<endl;
		cout<<"I="<<i<<" J="<<j+2<<endl;
		j+=0.2;
	}
	return 0;
}