#include <bits/stdc++.h>
using namespace std;
int main() {
	int m;
	cin>>m;
	vector <int> Arr(m);
	int total = 0;
	for (int i=0;i<m;i++) {
		cin>>Arr[i];
		total += Arr[i];
	}
	int l,r;
	cin>>l>>r;
	int sum = 0;
	for (int i= 0;i<m;i++) {
		sum+= Arr[i];
		if (sum>=l && sum <=r && (total - sum) >= l && (total - sum) <= r) {
			cout<<i+2<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
	return 0;
}