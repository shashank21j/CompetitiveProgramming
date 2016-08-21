#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	sort(Arr.begin(),Arr.end());
	Arr[0] = Arr[0] + Arr[n-1];
	Arr[n-1] = Arr[0] - Arr[n-1];
	Arr[0] = Arr[0] - Arr[n-1];

	for (int i=0;i<n;i++) {
		cout<<Arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}