#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	vector<int> brr(n,0);
	for (int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > n || brr[arr[i]-1] != 0 ) {
			count++;
		}
		else {
			brr[arr[i]-1] = 1;
		}
	}
	cout<<count<<endl;
	return 0;
}