#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(7);
	for (int i=0;i<7;i++) {
		cin>>Arr[i];
	}
	int sum = 0;
	int i = 0;
	while(n>0) {
		n-= Arr[i];
		i++;
		i%=7;
	}
	if (i==0) i=7;
	cout<<i<<endl;
	return 0;
}