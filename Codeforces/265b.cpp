#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	int cost = arr[0] + 1;
	for (int i = 1; i < n; i++) {
		cost+= abs(arr[i]-arr[i-1])+2;
	}
	cout<<cost<<endl;
	return 0;
}