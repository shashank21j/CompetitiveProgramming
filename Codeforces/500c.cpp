#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	vector<int> arr(n);   //weights
	vector<int> brr(m);   //ordering
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	for (int i = 0; i < m; i++) {
		cin>>brr[i];
	}
	int helper[501] = {0};
	vector<int> crr;  //unique ordering
	for (int i = 0 ;i< brr.size();i++) {
		if (helper[brr[i]] != 1) {
			crr.push_back(brr[i]);
			helper[brr[i]] = 1;
		}
	}
	int cost = 0;
	for (int i = 0;i<m;i++) {
		vector<int>::iterator it;
		it = crr.begin();
		while (*it!=brr[i]) {
			cost += arr[*it-1];
			it++;
		}
		crr.erase(it); 
  		crr.insert ( crr.begin() , brr[i] );
  	}
	cout<<cost<<endl;
	return 0;
}