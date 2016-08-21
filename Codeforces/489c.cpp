#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,s;
	cin>>m>>s;
	string matrix[101][901];
	string natrix[101][901];
	for (int i = 1; i <=m; i++) {
		matrix[i][0] = "-1";
		natrix[i][0] = "-1";
	}
	matrix[1][0] = "0";
	matrix[1][1] = "1";
	natrix[1][0] = "0";
	natrix[1][1] = "1";
	for (int i=1;i<=m;i++) {
		if (i>1) {
			matrix[i][1] = matrix[i-1][1] + "0";
			natrix[i][1] = natrix[i-1][1] + "0";
		}
		for (int j= 2 ;j<=s;j++) {
			if (j>9*i) {
				matrix[i][j] = "-1";
				natrix[i][j] = "-1";
				continue;
			}
			int k = i-1;
			matrix[i][j] = matrix[i][j-1];
			while(matrix[i][j][k] == '9') {
				k--;
			}
			matrix[i][j][k] += 1;
			k = 0;
			natrix[i][j] = natrix[i][j-1];
			while(natrix[i][j][k] == '9') {
				k++;
			}
			natrix[i][j][k] += 1;
		}
	}
	
	cout<<matrix[m][s]<<" "<<natrix[m][s]<<endl;
	return 0;
}