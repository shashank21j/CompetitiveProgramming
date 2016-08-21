#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	char matrix[51][51];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin>>matrix[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < m-1; j++) {
			vector<char> vrr(4);
			vrr[0] = matrix[i][j];
			vrr[1] = matrix[i][j+1];
			vrr[2] = matrix[i+1][j+1];
			vrr[3] = matrix[i+1][j];
			sort(vrr.begin(), vrr.end());
			string temp = "";
			temp +=vrr[0];
			temp +=vrr[1];
			temp +=vrr[2];
			temp +=vrr[3];
			if (temp == "acef") count++;
		}
	}
	cout<<count<<endl;
	return 0;
}