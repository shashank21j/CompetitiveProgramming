#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	map <string, string> arr;
	string a,b;
	for (int i = 0;i<m;i++) {
		cin>>a>>b;
		if (a.length()<=b.length()) {
			arr[a] = a;
		}
		else {
			arr[a] = b;
		}
	}
	for (int i = 0;i<n;i++) {
		cin>>a;
		cout<<arr[a]<<" ";
	}
	cout<<endl;
	return 0;
}