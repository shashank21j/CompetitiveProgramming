#include<bits/stdc++.h>
using namespace std; 

int main () {
	int n,m,k;
	int a,b;
	int flag = 0;
	cin>>n>>m>>k;
	int matrix[n][m];
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			matrix[i][j] = 0;
 		}
	}
	for (int i=0;i<k;i++) {
		cin>>a>>b;
		a--;
		b--;
		matrix[a][b] = 1;
		
		if (((a>0 && matrix[a-1][b] == 1) && (a>0 && b > 0 && matrix[a-1][b-1]==1) && (b>0 && matrix[a][b-1] == 1) )  ||
			( (a>0 && matrix[a-1][b] == 1) && (a>0 && b < m-1 && matrix[a-1][b+1]==1) && (b<m-1 && matrix[a][b+1]==1) ) ||
		( (a<n-1 && matrix[a+1][b]==1) && (a<n-1 && b>0 && matrix[a+1][b-1]==1) && (b>0 && matrix[a][b-1]==1) ) ||
		( (a<n-1 && matrix[a+1][b]==1) && (a<n-1 && b<m-1 && matrix[a+1][b+1] == 1) && (b<m-1 && matrix[a][b+1]==1) ) ) {
			cout<<i+1<<endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0) cout<<"0"<<endl;
	return 0;
}