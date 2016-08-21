#include <bits/stdc++.h> 

using namespace std;

int main() {
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	vector <int> check(d+1,0);
	for (int i = k;i<=d;i+=k) check[i] = 1;
	for (int i = l;i<=d;i+=l) check[i] = 1;
	for (int i = m;i<=d;i+=m) check[i] = 1;
	for (int i = n;i<=d;i+=n) check[i] = 1;
	int cnt = 0;
	for (int i=1;i<=d;i++) 
		if (check[i]==1) cnt++;
	cout<<cnt<<endl;
	return 0;
}