#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int p,q;
	int cnt = 0;
	cin >> n;
	for (int i=0;i<n;i++) {
		cin>>p>>q;
		if (p<q) { 
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}