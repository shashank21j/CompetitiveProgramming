#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int Arr[n][n];
	int row[n][n];
	int col[n][n];
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin>>Arr[i][j];
		}
	}
	for (int i=0;i<n;i++) {
		int sum = 0;
		for (int j=0;j<n;j++) {
			sum +=Arr[i][j];
		}
		for (int j=0;j<n;j++) {
			row[i][j] = sum;
		}
	}
	for (int i=0;i<n;i++) {
		int sum = 0;
		for (int j=0;j<n;j++) {
			sum +=Arr[j][i];
		}
		for (int j=0;j<n;j++) {
			col[j][i] = sum;
		}
	}
	int count = 0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (col[i][j] > row[i][j]) {
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}