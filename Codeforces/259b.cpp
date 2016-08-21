#include <bits/stdc++.h>
using namespace std;
int main() {
	int matrix[3][3];
	int sum = 0;
	int row[3] = {0};
	for (int i = 0;i<3;i++) {
		for (int j = 0; j < 3; j++) {
			cin>>matrix[i][j];
			sum+= matrix[i][j];
			row[i] += matrix[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		matrix[i][i] = sum/2 - row[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}