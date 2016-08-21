#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<long long int> arr(n);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	sort(arr.begin(), arr.end());
	long long int sum = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i]>=sum) {
			cnt++;
			sum += arr[i];
		}
	}
	cout<<cnt<<endl;
	return 0;
}