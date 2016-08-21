#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	sort(Arr.begin(),Arr.end());
	int count = 0;
	while (count<n && Arr[count]<=5-k) {	
		count++;
	}
	cout<<count/3<<endl;
	return 0;
}