#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=0 ; i <t ; i++) {
		int n;
		cin>>n;
		cout<<abs((((n*63 + 7492)*5 - 498)%100)/10)<<endl;
	}
	return 0;
}
