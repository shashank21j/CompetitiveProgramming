#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	vector <pair<int,int> > Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i].first>>Arr[i].second;
		Arr[i].second *= -1;
	}
	sort(Arr.rbegin(),Arr.rend());
	cout<<count(Arr.begin(), Arr.end(), Arr[k-1])<<endl;
	return 0;
}