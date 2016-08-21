#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector <int> A(n);
	vector <int> B(n);

	for (int i=0;i<n;i++) {
		A[i] = s[i] - 48;
	}
	for (int i=n;i<2*n;i++) {
		B[i-n] = s[i] -48;
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int g = 0;
	int l = 0;
	for (int i=0;i<n;i++) {
		if (A[i]>B[i]) g++;
		else if (A[i]<B[i]) l++;
		if (g*l>0) break;
	}
	if (g == n || l == n) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}