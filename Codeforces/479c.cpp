#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <pair <int,int> > Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i].first>>Arr[i].second;
	}
	sort(Arr.begin(),Arr.end());
	int l = min(Arr[0].first,Arr[0].second);
	for (int i=1;i<n;i++) {
		if (min(Arr[i].first,Arr[i].second) >= l) l = min(Arr[i].first,Arr[i].second);
		else l = max(Arr[i].first,Arr[i].second);
	}
	cout<<l<<endl;
	return 0;
}