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
	int x,y;
	ISTREAM>>x>>y;
	int counter = 1;
	while(counter<=y) {
		cout<<counter;
		if (counter%x == 0) cout<<endl;
		else cout<<" ";
		counter++;
	}
	return 0;
}