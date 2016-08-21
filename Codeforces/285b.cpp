#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,s,t;
	cin>>n>>s>>t;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	int count = 0;
	for (int i=0;i<=n;i++) {
		if (s == t) {
			break;
		}
		s = Arr[s-1];
		count++;
	}
	if (count == n+1) cout<<"-1"<<endl;
	else cout<<count<<endl;
	return 0;
}