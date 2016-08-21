#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t;
	cin>>n;
	vector<int> arr(101,0);
	for (int i = 1; i < n+1; i++) {
		for (int j = 1; j < n+1; j++) {
			cin>>t;
			if (t==1) {
				arr[i] = 1;
			}
			else if (t == 2) {
				arr[j] = 1;
 			}
 			else if (t == 3) {
 				arr[i] = 1;
 				arr[j] = 1;
 			}
		}
	}
	int count = 0;
	for (int i = 1;i<n+1;i++) {
		if (arr[i] == 0) {
			count++;
		}
	}
	cout<<count<<endl;
	for (int i = 1;i<n+1;i++) {
		if (arr[i] == 0) {
			cout<<i<<" ";
		}
	}
	if (count != 0) {
		cout<<endl;	
	}
	return 0;
}