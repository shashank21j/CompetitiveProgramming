#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	if (n == 1 && k == 1) {
		cout<<"a"<<endl;
		return 0;
	}

	if (k>n || k == 1) {
		cout<<"-1"<<endl;
		return 0;
	}
	int others = k-2;
	for (int i = 0;i<n - others;i++) {
		if (i%2 == 0) cout<<"a";
		else cout<<"b";
	}
	char c = 'c';
	for (int i=0;i<others;i++) {
		cout<<c;
		c++;
	}
	cout<<endl;
	return 0;
}