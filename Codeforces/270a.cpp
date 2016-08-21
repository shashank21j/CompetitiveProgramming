#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int t;
	for (int i=0;i<n;i++) {
		cin >>t;
		if (360%(180-t) == 0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}