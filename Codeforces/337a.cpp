#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector <int> A(m);
	for (int i=0;i<m;i++) {
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	int mindiff = INT_MAX;
	for (int i=0;i+n-1<m;i++) {
		if (A[i+n-1]-A[i] < mindiff) mindiff = A[i+n-1]-A[i];
	}
	cout<<mindiff<<endl;
	return 0;
}