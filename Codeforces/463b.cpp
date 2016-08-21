#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <long long int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	long long int beg = Arr[n-1]/2 + (int)(Arr[n-1]%2 != 0);
	for (int i = n-2;i>=0;i--) {
		beg = (Arr[i] + beg)/2 + (int)((Arr[i] + beg)%2!= 0);
	}
	cout<<beg<<endl;
	return 0;
}