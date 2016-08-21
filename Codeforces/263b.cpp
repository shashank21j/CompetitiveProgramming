#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	if ( k>n ) {
		cout<<"-1\n";
		return 0;
	}
	vector <int> A(n);
	for (int i=0;i<n;i++) {
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	cout<<A[A.size()-k]<<" "<<A[A.size()-k]<<endl;
	return 0;
}