#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n,r,avg;
	cin>>n>>r>>avg;
	long long int a,b;
	vector< pair<long long int,long long int> > v(n);
	long long int sum = 0;
	for (int i = 0; i < n; i++) {
		cin>>a>>b;
		v[i].first = b;
		v[i].second = a;
		sum += a;
	}
	sum = avg * n - sum;
	if (sum <= 0) {
		cout<<0<<endl;
		return 0;
	}
	sort(v.begin(), v.end());
	int id = 0;
	long long int counter = 0;
	while (sum>0) {
		if (r - v[id].second >0) {
			counter+= min(r - v[id].second,sum)*v[id].first;
			sum -= min(r - v[id].second,sum);
		}
		id++;
	}
	cout<<counter<<endl;
	return 0;
}