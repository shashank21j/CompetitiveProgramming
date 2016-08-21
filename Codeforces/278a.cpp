#include <bits/stdc++.h>

using namespace std;


int main() { 
	int n;
	cin>>n;
	vector <int> arr(n);
	for (int i = 0; i<n; i++ ) {
		cin>>arr[i];
	}
	int s,t;
	cin>>s>>t;
	if (s>t) {
		s = s+t;
		t = s - t;
		s = s - t;
	}
	int sum1=0,sum2=0;
	for (int i = 0; i < n; i++) {
		if (i>=s-1 && i<t-1) {
			sum1 += arr[i];	
		}
		else {
			sum2 += arr[i];		
		}
	}
	cout<<min(sum1,sum2)<<endl;
	return 0;
}