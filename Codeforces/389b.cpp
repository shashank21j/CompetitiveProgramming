#include <bits/stdc++.h>

using namespace std;

int main(){ 
	int n;
	cin>>n;
	char matrix[n][n];
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin>>matrix[i][j];
		}
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (matrix[i][j] == '#') {
				matrix[i][j] = '.';
				if (matrix[i+1][j] == '#') {
					matrix[i+1][j] = '.';
				}
				else {
					cout<<"NO\n";
					return 0;
				}
				if (matrix[i+1][j+1] == '#') {
					matrix[i+1][j+1] = '.';
				}
				else {
					cout<<"NO\n";
					return 0;
				}
				if (matrix[i+1][j-1] == '#') {
					matrix[i+1][j-1] = '.';
				}
				else {
					cout<<"NO\n";
					return 0;
				}
				if (matrix[i+2][j] == '#') {
					matrix[i+2][j] = '.';
				}
				else {
					cout<<"NO\n";
					return 0;
				}
			}
		}
	}
	cout<<"YES\n";
	return 0;
}