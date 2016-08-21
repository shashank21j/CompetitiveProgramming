#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector< pair< pair<int,int>, int > > v(n);
	int minind = -1;
	int ind = -1;
	int mini = INT_MAX;
	int maxi = -1;
	int a,b;
	for (int i = 0; i < n; i++) {
		cin>>v[i].first.first>>v[i].first.second;
		v[i].second = i+1;
	}
	sort(v.begin(), v.end());
	mini = v[0].first.first;
	ind = v[0].second;
	int i = 0;
	while (v[i].first.first == mini ) {
		if (v[i].first.second>maxi) {
			maxi = v[i].first.second;
			ind = v[i].second;
		}
		i++;
	}
	for (int i = 0;i<n;i++) {
		if (v[i].first.second > maxi) {
			cout<<"-1"<<endl;
			return 0;
		}
	}
	cout<<ind<<endl;
	return 0;
}