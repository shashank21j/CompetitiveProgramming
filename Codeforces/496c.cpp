#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	vector<string> arr(n);
	for (int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	int counter = 0;
	vector<int> helper(n,0);
	for (int j = 0; j < m; j++) {
		int flag = 0;
				
		for (int i = 1; i < n; i++) {
			if (helper[i-1]==0 && arr[i][j] < arr[i-1][j] ) {
				counter++;
				flag = 1;
				break;
			}
			else if (helper[i-1] == 0 && arr[i][j] == arr[i-1][j]) {
				flag = 2;
			}
		}
		if (flag == 2) {
			for (int i = 1; i < n; i++) {
				if (arr[i][j] > arr[i-1][j]) helper[i-1] = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
	cout<<counter<<endl;
	return 0;
}