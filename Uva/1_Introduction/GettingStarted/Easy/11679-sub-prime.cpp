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
	int b,n;
	int x,y,z;
	while (1) {
		ISTREAM>>b>>n;
		int flag = 0;
		if (b == 0 && n == 0) {
			break;
		}
		vector<int> banks(b);
		for (int i = 0; i < b; i++) {
			ISTREAM>>banks[i];
		}
		for (int i = 0; i < n; i++) {
			ISTREAM>>x>>y>>z;
			banks[x-1]-=z;
			banks[y-1]+=z;
		}
		for (int i = 0; i < b; i++) {
			if (banks[i]<0) {
				flag = 1;
			}
		}
		if (flag == 1) {
			cout<<"N"<<endl;
		}
		else {
			cout<<"S"<<endl;
		}
		banks.clear();
	}
	return 0;
}
