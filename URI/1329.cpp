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
	while(1) {
		ISTREAM>>n;
		if (n == 0) break;
		int mary = 0;
		int john = 0;
		for (int i = 0; i < n; i++) {
			ISTREAM>>temp;
			if (temp == 0) {
				mary++;
			}
			else john++;
		}
		cout<<"Mary won "<<mary<<" times and John won "<<john<<" times"<<endl;
	}
	return 0;
}
