#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	sort(Arr.begin(),Arr.end());
	int sum = 0;
	for (int i= n-1;i>=0;i-=k) {
		sum += (Arr[i] -1)*2;
	}
	cout<<sum<<endl;
	return 0;
}