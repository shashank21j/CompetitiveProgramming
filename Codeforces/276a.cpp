#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int max = -999999999;
	for (int i=0;i<n;i++) {
		int f,t;
		int temp;
		cin>>f>>t;
		if (t>k) {
			f = f - (t-k);
		}
		if (f>max) max = f;
	}
	cout<<max<<endl;
	return 0;
}