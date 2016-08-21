#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	map <string,int> arr;
	for (int i = 0;i<n;i++) {
		cin>>s;
		arr[s]+=1;
	}
	int maxi = 0;
	for (auto i : arr) {
		if (i.second > maxi) maxi = i.second;
	}
	cout<<maxi<<endl;
	return 0;
}