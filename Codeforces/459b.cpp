#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n;
	cin >> n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	long long int count1 = 1;
	sort(Arr.begin(),Arr.end());
	long long int maxdiff = Arr[n-1] - Arr[0];
	if (maxdiff == 0) {
		cout<<"0 "<<(n*(n-1))/2;
		return 0;
	}
	for (int i=1; i<n; i++) {
		if (Arr[i] != Arr[0]) {
			break;
		}
		count1++;
	}
	long long int count2 = 1;
	for (int i=n-2; i>0; i--) {
		if (Arr[i] != Arr[n-1]) {
			break;
		}
		count2++;
	}
	cout<<maxdiff<<" "<<count1*count2<<endl;
	return 0;
}