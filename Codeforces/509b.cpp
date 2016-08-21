#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	vector < vector<int> > piles;
	int ele;
	int maxi = 0;
	for (int i = 0;i<n;i++) {
		cin>>ele;
		if (ele > maxi) maxi = ele;
		vector <int> t(ele,0);
		piles.push_back(t);
	}
	int color = 1;
	for (int i = 0;i<maxi;i++) {
		if (color > k) {
			cout<<"NO"<<endl;
			return 0;
		}
		int cnt = 0;
		for(int j = 0; j < n; j++) {
			if (i >= piles[j].size()) {
				continue;
			}
			piles[j][i] = color;
			cnt++;
		}
		if (cnt < n) color++;
	}
	cout<<"YES"<<endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0;j<piles[i].size();j++) {
			cout<<piles[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}