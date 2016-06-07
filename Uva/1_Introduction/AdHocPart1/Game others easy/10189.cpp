#include <bits/stdc++.h>
using namespace std;
int matrix[101][101];
int a,b;
void fill(int i,int j) {
	if (i > 0 && matrix[i-1][j]!=-1) matrix[i-1][j] += 1;
	if (j > 0 && matrix[i][j-1]!=-1) matrix[i][j-1] += 1;
	if (i < a-1 && matrix[i+1][j]!=-1) matrix[i+1][j] += 1;
	if (j < b-1 && matrix[i][j+1]!=-1) matrix[i][j+1] += 1;
	if (i > 0 && j < b-1 && matrix[i-1][j+1]!=-1) matrix[i-1][j+1] += 1;
	if (i < a-1 && j < b-1 && matrix[i+1][j+1]!=-1) matrix[i+1][j+1] += 1;
	if (i < a-1 && j > 0 && matrix[i+1][j-1]!=-1) matrix[i+1][j-1] += 1;
	if (i > 0 && j > 0 && matrix[i-1][j-1]!=-1) matrix[i-1][j-1] += 1;
}
int main() {
	int counter = 0;
	cin>>a>>b;
	while(1) {
		counter += 1;
		for (int i = 0;i<a;i++) {
			for (int j = 0;j<b;j++) {
				matrix[i][j] = 0;
			}
		}
		string temp;
		for (int i = 0;i<a;i++) {
			cin>>temp;
			for (int j = 0;j<b;j++) {
				if (temp[j] == '*') matrix[i][j] = -1;
			}
		}
		for (int i = 0;i<a;i++) {
			for (int j=0;j<b;j++) {
				if (matrix[i][j] == -1) fill(i,j);
			}
		}
		cout<<"Field #"<<counter<<":"<<endl;
		for (int i = 0;i<a;i++) {
			for (int j = 0;j<b;j++) {
				if (matrix[i][j] == -1) cout<<'*';
				else cout<<matrix[i][j];
			}
			cout<<endl;
		}
		cin>>a>>b;
		if (a == 0 && b == 0) {
			break;
		}
		else cout<<endl;
	}
}