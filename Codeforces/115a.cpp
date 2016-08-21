#include <bits/stdc++.h>
using namespace std;
map <int, vector<int> > edge;
int max1 = 1;
int dfs(int r) {
	if (edge.find(r)!= edge.end()) {
		int cnt;
		int maxii = -1;
		for (int i = 0;i < edge[r].size();i++) {
			cnt = 1+dfs(edge[r][i]);
			if (cnt > maxii ) maxii = cnt;
		}
		return maxii;
	}
	else {
		return 1;
	}
}
int main() {
	int n;
	cin>>n;
	
	int node;
	vector<int> roots;
	for (int i = 1;i<=n;i++) {
		cin>>node;
		if (node!= -1) {
			edge[node].push_back(i);	
		}
		else {
			roots.push_back(i);
		}
	}
	
	int count;
	int maxi = 1;
	for (int i = 0;i<roots.size();i++) {
		count = dfs(roots[i]);
		if (count>maxi) maxi = count;
	}
	cout<<maxi<<endl;
	return 0;
}