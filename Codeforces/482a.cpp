#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int low = 1;
	int high = k + 1;
	while (1) {
		cout<<low<<" ";
		cout<<high<<" ";
		high--;
		low++;
		if (low == high) {
			cout<<low<<" ";
			break;
		}
		else if (low > high) break;
		//if (low == high) break;
	}
	for (int i=k+2;i<=n;i++) {
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}