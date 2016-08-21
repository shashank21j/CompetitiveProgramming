#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	vector <int> Brr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		Brr[i] = Arr[i];
	}
	sort(Brr.begin(), Brr.end());
	vector < pair<int,int> > res;
	for (int i=0;i<n;i++) {
		if (Arr[i]!=Brr[i]) {
			vector <int>::iterator it;
			it = find(Arr.begin() + i,Arr.end(),Brr[i]);
			int pos = distance(Arr.begin() ,it);
			swap(Arr[i],Arr[pos]);
			res.push_back(make_pair(i,pos));
		}
	}
	cout<<res.size()<<endl;
	for (int i=0;i<res.size();i++) {
		cout<<res[i].first<<" "<<res[i].second<<endl;
	}
	return 0;
}