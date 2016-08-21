#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a,b,c,d;
	long long int sum = 0;
	for (int i = 0; i < n; i++)	{
		cin>>a>>b>>c>>d;
		sum += (abs(c-a)+1)*(abs(d-b)+1);
	}
	cout<<sum<<endl;
	return 0;
}