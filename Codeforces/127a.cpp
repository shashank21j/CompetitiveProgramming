#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	vector < pair<int,int> > Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i].first>>Arr[i].second;
	}
	double sigma = 0.0;
	for (int i=1;i<n;i++) {
		double d1 = (Arr[i].first - Arr[i-1].first);
		double d2 = (Arr[i].second - Arr[i-1].second);
		sigma += sqrt(d1*d1 + d2*d2);
	}
	printf("%.7lf",(sigma*k)/50);
	return 0;
}