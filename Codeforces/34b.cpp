#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector <int> A(n);
	for (int i=0;i<n;i++) {
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	int sum = 0;
	for (int i = 0;i<m;i++) {
		if (A[i]<0) {
			sum+=A[i];
		}
		else break;
	}
	cout<<(-1)*sum<<endl;
	return 0;
}