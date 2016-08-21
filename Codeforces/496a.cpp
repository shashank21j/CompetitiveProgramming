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
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		ISTREAM>>arr[i];
	}
	int globalmin = INT_MAX;
	for (int i = 1; i < n-1; i++) {
		int max = 0;
		for (int j = 0; j< n-1; j++) {
			int t = j + 1;
			if (t == i) {
				t+=1;
			}
			if (arr[t] - arr[j] > max) max = arr[t] - arr[j];
		}
		if (max < globalmin) globalmin = max;
	}
	cout<<globalmin<<endl;
	return 0;
}