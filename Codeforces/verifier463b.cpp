#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,v;
	cin>>n>>v;
	vector <long long int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		cout<<v<<" "<<Arr[i]<<endl;
		v+=v-Arr[i];
		if (v < 0 ) cout<<"bakchodi "<<Arr[i]<<endl;
	}
	return 0;
}