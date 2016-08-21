#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	vector<int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	int count = 0;
	int trips = 0;
	for (int i=0;i<n;i++) {
		if (count + Arr[i]>m) {
			trips++;
			count = 0;
		}
		count += Arr[i];
	}
	if (count > 0) {
		trips++;
	}
	cout<<trips<<endl;
	return 0;
}