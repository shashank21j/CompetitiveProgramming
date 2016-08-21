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
	int temp;
	ISTREAM>>temp;
	int sum = 0;
	int cnt = 0;
	while(temp>=0) {
		sum+=temp;
		cnt++;
		ISTREAM>>temp;
	}
	cout<<fixed<<setprecision(2);
	cout<<sum/(cnt*1.0)<<endl;
	return 0;
}