#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,s;
	cin>>n>>s;
	vector <int> Arr(n);
	int sum = 0;
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		sum+=Arr[i];
	}
	sort(Arr.begin(),Arr.end());
	if (sum - Arr[n-1] <= s) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}