#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	cin>>m;
	vector <int> Brr(m);
	for (int i=0;i<m;i++) {
		cin>>Brr[i];
	}
	int maxi = -1;
	int maxi_count = 0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (Brr[j]%Arr[i] == 0) {
				if (Brr[j]/Arr[i] > maxi ) {
					maxi = Brr[j]/Arr[i];
					maxi_count = 1;
				}
				else if (Brr[j]/Arr[i] == maxi) {
					maxi_count++;
				}
			}
		}
	}
	cout<<maxi_count<<endl;
	return 0;
}