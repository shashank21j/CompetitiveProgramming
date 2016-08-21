#include <bits/stdc++.h>

using namespace std;

int main() { 
	int n,k;
	cin>>n>>k;
	vector <int> arr(n);
	int sum = 0;
	for ( int i = 0;i<n;i++) {
		cin>>arr[i];
		sum += arr[i];
	}
	cout<<abs(sum)/k + (int)(sum%k != 0)<<endl;
	return 0;
}