#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> A(n);
	for (int i=0;i<n;i++) {
		cin>>A[i];
	}
	long long int cnt = 0;
	sort(A.begin(),A.end());
	for (int i=1;i<=n;i++) {
		cnt+=abs(i-A[i-1]);
	}
	cout<<cnt<<endl;
	return 0;
}