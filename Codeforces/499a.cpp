#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	cin>>n>>x;
	int a,b;
	int counter = 1;
	int sum = 0;
	for (int i = 0;i<n;i++) {
		cin>>a>>b;
		while (counter + x <= a) counter += x;
		sum += b+1 - counter;
		counter = b+1;
	}
	cout<<sum<<endl;
	return 0;
}