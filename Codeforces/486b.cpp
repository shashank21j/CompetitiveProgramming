#include <bits/stdc++.h>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int matrix[m][n];
	int new_matrix[m][n];
	int matrix2[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			new_matrix[i][j] = 1;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matrix2[i][j] = 0;
		}
	}
	for (int i = 0;i<m;i++) {
		for (int j = 0; j < n; j++) {
			cin>>matrix[i][j];
		}
	}
	for (int i = 0;i<m;i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == 0) {
				for (int k = 0;k < m;k++) {
					new_matrix[k][j] = 0;
				}
				for (int k = 0;k < n;k++) {
					new_matrix[i][k] = 0;
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (new_matrix[i][j]== 1) {
				for (int k = 0;k < m;k++) {
					matrix2[k][j] = 1;
				}
				for (int k = 0;k < n;k++) {
					matrix2[i][k] = 1;
				}	
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] != matrix2[i][j]) {
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout<<new_matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}