#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int temp;
	set <int> check;
	vector <int> inp(n);
	vector <int> Arr(n+1);
	for (int i=0;i<n;i++) {
		cin>>inp[i];
	}
	for (int i=n-1;i>=0;i--) {
		check.insert(inp[i]);
		Arr[i] = (int)check.size();
	}
	for (int i=0;i<m;i++) {
		cin>>temp;
		cout<<Arr[temp-1]<<endl;
	}
	return 0;
}