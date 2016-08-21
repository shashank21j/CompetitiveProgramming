#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	vector<string> matrix(n);
	for (int i = 0;i<n;i++) {
		cin>>matrix[i];
	}
	for (int i = 0;i<n;i++) {
		for (int j = 0;j < n; j++) {
			if (matrix[i][j] != '1') continue;
			for (int k = 0;k <n;k++) {
				if (matrix[j][k] == '1') {
					matrix[i][k] = '1';
				}
			}
		}
	}
	int i;
	int flag;
	int super = 1;
	while (super){
		i = 0;
		super = 0;
		while (i < n) {
			/*
			for (int id = 0;id<n;id++) {
				cout<<arr[id]<<" ";
			}		
			cout<<endl;
			*/
			int j = 0;
			flag = 0;
			int swapper = -1;
			int maxi = -1;
			while (j < n) {
				if (matrix[i][j] == '1' && ( (i < j && arr[i] > arr[j] && arr[i] - arr[j] > maxi) || (i > j && arr[i]<arr[j] && arr[j] - arr[i] > maxi)) ){
					maxi = abs(arr[i] - arr[j]);
					swapper = j;
				}
				j++;
			}
			if (swapper != -1) {
					arr[i] = arr[i] + arr[swapper];
					arr[swapper] = arr[i] - arr[swapper];
					arr[i] = arr[i] - arr[swapper];
					flag = 1;
					super = 1;
				}
			if (flag == 0) {
				i++;
			}
		}
	}
	for (int i = 0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}