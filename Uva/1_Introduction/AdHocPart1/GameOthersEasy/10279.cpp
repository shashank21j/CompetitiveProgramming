#include <bits/stdc++.h>
using namespace std;
int matrix[101][101];
int a;
void fill(int i,int j) {
	if (i > 0 && matrix[i-1][j]!=-1) matrix[i-1][j] += 1;
	if (j > 0 && matrix[i][j-1]!=-1) matrix[i][j-1] += 1;
	if (i < a-1 && matrix[i+1][j]!=-1) matrix[i+1][j] += 1;
	if (j < a-1 && matrix[i][j+1]!=-1) matrix[i][j+1] += 1;
	if (i > 0 && j < a-1 && matrix[i-1][j+1]!=-1) matrix[i-1][j+1] += 1;
	if (i < a-1 && j < a-1 && matrix[i+1][j+1]!=-1) matrix[i+1][j+1] += 1;
	if (i < a-1 && j > 0 && matrix[i+1][j-1]!=-1) matrix[i+1][j-1] += 1;
	if (i > 0 && j > 0 && matrix[i-1][j-1]!=-1) matrix[i-1][j-1] += 1;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>a;
		vector<string> click(a);
		for (int i = 0;i<a;i++) {
			for (int j = 0;j<a;j++) {
				matrix[i][j] = 0;
			}
		}
		string temp;
		for (int i = 0;i<a;i++) {
			cin>>temp;
			for (int j = 0;j<a;j++) {
				if (temp[j] == '*') matrix[i][j] = -1;
			}
		}
		for (int i = 0;i<a;i++) {
			for (int j=0;j<a;j++) {
				if (matrix[i][j] == -1) fill(i,j);
			}
		}
		bool bomb = false;
		for (int i = 0;i<a;i++) {
			cin>>click[i];
		}
		for (int i = 0;i<a;i++) {
			for (int j = 0;j<a;j++) {
				if (click[i][j] == 'x' && matrix[i][j] == -1) bomb = true;
			}
		}
		for (int i = 0;i<a;i++) {
			for (int j = 0;j<a;j++) {
				if (click[i][j] == 'x' && matrix[i][j] == -1) cout<<'*';
				else if (click[i][j] == 'x') cout<<matrix[i][j];
				else if (bomb == true and matrix[i][j] == -1)cout<<'*';
				else cout<<".";
			}
			cout<<endl;
		}
		if (t>0) cout<<endl;
	}
	return 0;
}