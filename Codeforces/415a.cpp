#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin>>n>>m;
	int temp;
	vector <int> Arr(n,0);
	for (int i=0;i<m;i++) {
		cin>>temp;
		for (int j=temp-1;j<n;j++) {
			if (Arr[j] == 0) {
				Arr[j] = temp;
			}
		}
	}
	for (int i=0;i<n;i++) {
		cout<<Arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}