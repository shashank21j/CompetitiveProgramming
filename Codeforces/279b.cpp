#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t;
	cin>>n>>t;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	int i1 = 0;
	int i2 = 0;
	int sum = 0;
	int max = -1;
	while (i1 < n) {
		while (i2 < n && sum + arr[i2] <= t) {
			sum += arr[i2];
			i2++;
		}
		if (i2 - i1 > max) max = i2 - i1;
		sum-=arr[i1];
		i1++;
	}
	cout<<max<<endl;
	return 0;
}