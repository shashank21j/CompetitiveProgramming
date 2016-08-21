#include <bits/stdc++.h>

using namespace std;
int main() {
	int n,c;
	cin>>n>>c;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	int maxdiff = 0;
	for (int i=0;i<n-1;i++) {
		if (Arr[i] - Arr[i+1] - c>maxdiff) {
			maxdiff = Arr[i] - Arr[i+1] - c;
		}
	}
	cout<<maxdiff<<endl;
	return 0;
}