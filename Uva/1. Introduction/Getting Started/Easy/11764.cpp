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
	int t;
	for (int i = 0; i < n; i++) {
		ISTREAM>>t;
		vector<int> h(t);
		for (int j = 0; j < t; j++) {
			ISTREAM>>h[j];
		}
		int high = 0;
		int low = 0;
		for (int j = 1; j < t; j++) {
			if (h[j] > h[j-1]) high++;
			else if (h[j]<h[j-1]) low++;
		}
		cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;
	}
	return 0;
}