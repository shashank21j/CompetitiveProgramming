#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,k;
	cin>>n>>k;
	if (n%2 == 0) {
		if (k<=n/2) cout<<2*k - 1<<endl;
		else cout<<2*(k - n/2)<<endl;
	}
	else {
		if (k<=(n+1)/2) cout<<2*k - 1<<endl;
		else cout<<2*(k - (n+1)/2)<<endl;
	}
	return 0;
}