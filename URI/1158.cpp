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
	int temp,cnt;
	for (int i = 0; i < n; i++) {
		ISTREAM>>temp>>cnt;
		if(abs(temp)%2==0) temp++;
		int sum = 0;
		for (int j = temp; j < temp+2*cnt; j+=2) {
			sum+=j;
		}
		cout<<sum<<endl;
	}
	return 0;
}