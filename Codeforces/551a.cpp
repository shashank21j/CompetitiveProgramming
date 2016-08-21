#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector< pair<int,int> > arr(n);
	for (int i = 0; i < n; i++) {
		cin>>arr[i].first;
		arr[i].second = i;
	}
	sort(arr.rbegin(), arr.rend());
	vector<int> res(n);
	res[arr[0].second] = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i].first == arr[i-1].first) {
			res[arr[i].second] = res[arr[i-1].second];
		}
		else {
			res[arr[i].second] = i+1;
		}
	}
	for (int i = 0;i<n;i++) cout<<res[i]<<" ";
	cout<<endl;
	return 0;
}