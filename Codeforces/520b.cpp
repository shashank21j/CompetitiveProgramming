#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	queue <int> q;
	int step = -1;
	q.push(n);
	queue <int> q1;
	vector<int> visited(100000,0);
	visited[n] = 1;
	while (1) {
		step++;
		while (!q.empty()) {
			n = q.front();
			q.pop();
			if (n == m) break;
			if (n==0) continue;
			if (!visited[n-1]) {
				visited[n-1]=1;
				q1.push(n-1);
			}
			if (n<m && !visited[2*n]) {
				visited[2*n]=1;
				q1.push(2*n);
			}
		}
		q.swap(q1);
		if (n==m) break;
	}
	cout<<step<<endl;
	return 0;
}