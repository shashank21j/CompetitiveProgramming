#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	char matrix[n][m];
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			cin>>matrix[i][j];
		}
	}
	int eat = 0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (matrix[i][j] == 'P') {
				if (i>0 && matrix[i-1][j] == 'W') {
					eat++;
					matrix[i-1][j] = '.';
				}
				else if (j>0 && matrix[i][j-1] == 'W') {
					eat++;
					matrix[i][j-1] = '.';
				}
				else if (i<n-1 && matrix[i+1][j] == 'W') {
					eat++;
					matrix[i+1][j] = '.';
				}
				else if (j<m-1 && matrix[i][j+1] == 'W') {
					eat++;
					matrix[i][j+1] = '.';
				}
			}
		}
	}
	cout<<eat<<endl;
	return 0;
}