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
	int n,t;
	ISTREAM>>n>>t;
	vector <int> arr(n);
	for (int i = 0; i < n-1; i++) {
		ISTREAM>>arr[i];
	}
	int flag = 0;
	int i = 0;
	while (i < n) {
		if (i+1 == t) {
			flag = 1;
			break;
		}
		if (i+1 > t) break;
		i += arr[i];
	}
	if (flag == 0) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	return 0;
}