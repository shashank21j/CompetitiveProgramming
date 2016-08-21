#include <bits/stdc++.h>
using namespace std;
int g(int n,int k) {
	if (n == 1) return 0;
	return (g(n-1,k) + k )%n;
}
int main() {
	int counter = 1;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		int n,k;
		cin>>n>>k;
		cout<<"Case "<<counter<<": "<<g(n,k) + 1<<endl;
		counter++;
	}
	return 0;
}