#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
	int n;
	cin>>n;
	int t;
	pair <int,int> A[n];
	vector<int> v(n);
	for (int i=0;i<n;i++) {
		cin>>A[i].first;
		A[i].second = i;
	}
	sort(A,A+n);
	int maxi=-1;
	for (int i=0;i<n;i++) {
		maxi = max(A[i].first,maxi+1);
		v[A[i].second] = maxi;
	}
	for (int i=0;i<n;i++) cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}