#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	for (int i=0;i<n;i++) {
		int temp;
		cin>>temp;
		if (temp==1) {
			m--;
		}
		else if (temp == 2) {
			if (k>0) {
				k--;
			}
			else m--;
		}
	}
	int res=0;
	if (0-m>0) res+=abs(m);
	if (0-k>0) res+=abs(k);
	cout<<res<<endl;
	return 0;
}