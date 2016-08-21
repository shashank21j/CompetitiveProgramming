#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> check(n+1);
	int temp;
	for (int i=1;i<=n;i++) {
		cin>>temp;
		check[temp] = i;
	}
	for (int i=1 ;i<=n; i++) {
		cout<<check[i]<<" ";
	}
}