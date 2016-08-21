#include <bits/stdc++.h>

using namespace std;

int main() { 
	int n,m;
	cin >>n>>m;
	int sum=n;
	while (n>=m) {
		sum += n/m;
		n = n/m + n%m;
	}
	cout<<sum<<endl;
	return 0;
}
