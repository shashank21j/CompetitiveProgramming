#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<long long int> x(n);
	vector<long long int> y(n);
	for (int i = 0;i<n;i++) {
		cin>>x[i]>>y[i];
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	long long int t = max(abs(x[0]-x[n-1]),abs(y[0]-y[n-1]));
	cout<<t*t<<endl;
	return 0;
}