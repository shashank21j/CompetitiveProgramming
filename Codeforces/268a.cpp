#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> H(n);
	vector <int> A(301,0);
	int temp;
	for(int i=0;i<n;i++) {
		cin>>H[i]>>temp;
		A[temp]++;
	}
	int sum = 0;
	for (int i=0;i<n;i++) {
		sum+=A[H[i]];
	}
	cout<<sum<<endl;
	return 0;
}