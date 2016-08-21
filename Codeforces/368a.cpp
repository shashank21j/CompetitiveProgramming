#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,d;
	int c;
	cin>>n>>d;
	vector <int > arr(n);
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	cin>>c;
	int i=0;
	int profit = 0;
	for (i=0;i<min(c,n);i++) {
		profit+=arr[i];
	}
	if (c>n) {
		profit -= d*(c-n);
	}
	cout<<profit<<endl;
	return 0;
}