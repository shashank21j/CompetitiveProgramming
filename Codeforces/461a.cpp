#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n;
	cin>>n;
	vector <long long int> arr(n);
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	long long int sum = arr[n-1]*n;
	for (long long int i = n-2; i>=0;i--) {
		sum += arr[i]* (i+2);
	}
	cout<<sum<<endl;
	return 0;
}