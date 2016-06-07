#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,c;
	int counter = 0;
	while (1) {
		cin>>n>>m>>c;
		if (n + m + c == 0) break;
		counter++;
		vector<int> arr(n+1);
		vector<int> aux(n+1,0);
		for (int i = 1; i < n+1; i++) {
			cin>>arr[i];
		}
		int t,sum = 0;
		int max = -1;
		for (int i = 0; i < m; i++) {
			cin>>t;
			aux[t]^=1;
			if (aux[t] == 1) {
				sum+=arr[t];
			}
			else {
				sum -= arr[t];
			}
			if (sum > max) max = sum;
		}
		cout<<"Sequence "<<counter<<endl;
		if (max > c) cout<<"Fuse was blown."<<endl;	
		else {
			cout<<"Fuse was not blown."<<endl;
			cout<<"Maximal power consumption was "<<max<<" amperes."<<endl;
		}
		cout<<endl;
	}
	return 0;
}