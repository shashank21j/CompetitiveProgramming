#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int n, m;
	cin >> t;
	while(t--) {
		cin >> n >> m;	
		vector <vector <int> > incidence_matrix(n, vector <int> (m, 0));
		bool flag = true;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> incidence_matrix[i][j];
			}
		}
		set <pair<int, int> > global_nodes;
		for (int i = 0; i < m; i++) {
			set <int> nodes;
			for (int j = 0; j < n; j++) {
				if (incidence_matrix[j][i] == 1) {
					nodes.insert(j);
				}
			}
			if ((int)nodes.size() != 2) {
				flag = false;
			} else {
				pair<int, int> temp = make_pair(*nodes.begin(), *nodes.rbegin());
				if (global_nodes.find(temp) != global_nodes.end()) {
					flag = false;
				} else {
					global_nodes.insert(temp);
				}
			}
		}
		if (flag) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}