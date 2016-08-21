#include <bits/stdc++.h>
using namespace std;
int matrix[101][101];
int helper[101] = {0};
void bfs(int i,int n) {
	helper[i] = 1;
	for (int j = 0;j<n;j++) {
		if (matrix[i][j] == 1 && helper[j] == 0) {
			bfs(j,n);
		}
	}
}
int main() {
	int n,m;
	cin>>n>>m;
	map < int, vector<int> > langs;
	int temp;
	int flag = 0;
	for (int i = 0 ; i < n; i++) {
		cin>>temp;
		int temp1;
		for (int j = 0;j<temp; j++) {
			cin>>temp1;
			flag = 1;
			langs[temp1].push_back(i);
		}
	}
	for (int i = 0;i<n;i++) {
		for (int j = 0;j<n;j++) {
			matrix[i][j] = 0;
		}
	}
	for (map <int, vector<int> > :: iterator it = langs.begin(); it!=langs.end();it++) {
		for (int i = 0;i< langs[it->first].size();i++) {
			for (int j = 0;j< langs[it->first].size();j++) {
				if (i == j) continue;
				matrix[langs[it->first][i]][langs[it->first][j]] = 1;
				matrix[langs[it->first][j]][langs[it->first][i]] = 1;
			}
		}
	}
	int counter = 0;
	for (int i = 0;i < n;i++) {
		if (helper[i] == 0) {
			counter+=1;
			bfs(i,n);
		}
	}
	if (flag == 1) cout<<counter - 1<<endl;
	else cout<<counter<<endl;

	return 0;
}