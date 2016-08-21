#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	vector<int> max(m,-1);
	vector<int> counts(m,0);
	string input;
	vector<int> winners(n,0);
	for (int i=0;i<n;i++) {
		cin>>input;
		for (int j = 0;j<m;j++) {
			int t = input[j] - 48;
			arr[i][j] = t;
		}
	}
	for (int i = 0;i<m;i++) {
		vector <int> temp;
		int max = -1;
		for (int j=0;j<n;j++) {
			if (arr[j][i]>max) {
				max = arr[j][i];
				temp.clear();
				temp.push_back(j);
			}
			else if (arr[j][i] == max) {
				temp.push_back(j);
			}
		}
		for ( int j= 0;j<temp.size();j++) {
			winners[temp[j]]++;
		}
	}
	int count = 0;
	for (int i=0;i<n;i++) {
		if (winners[i] > 0) {
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}