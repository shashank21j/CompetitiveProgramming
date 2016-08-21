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
	double l;
	ISTREAM>>n>>l;
	vector<double> arr(n);
	for (int i = 0; i < n; i++) {
		ISTREAM>>arr[i];
	}
	sort(arr.begin(), arr.end());
	double maxd = 0.0;
	for (int i=1;i<n;i++) {
		if (arr[i] - arr[i-1] > maxd ) {
			maxd = arr[i] - arr[i-1];
		}
	}
	cout<<setprecision(9)<<max(maxd/2,max(arr[0],l-arr[n-1]))<<endl;
	return 0;
}