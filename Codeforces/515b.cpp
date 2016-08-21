#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,ele;
	cin>>n>>m;
	vector<int> boys(n,0);
	vector<int> girls(m,0);
	int b,g;
	cin>>b;
	for (int i = 0; i < b; i++)	{
		cin>>ele;
		boys[ele] = 1;
	}
	cin>>g;
	for (int i = 0; i < g; i++)	{
		cin>>ele;
		girls[ele] = 1;
	}
	for (int i = 0;i<2*m*n;i++) {
		boys[i%n]|=girls[i%m];
		girls[i%m]|=boys[i%n];
	}
	for (int i = 0; i < n; i++) {
		if (boys[i]==0) {
			cout<<"No"<<endl;
			return 0;
		}
	}
	for (int i = 0; i < m; i++) {
		if (girls[i]==0) {
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0;
}