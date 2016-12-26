#include <bits/stdc++.h>

using namespace std;

class UnionFind {
private:
	vector<int> parent;
	vector<int> rank;
	int size;
public:
	UnionFind(int n) {
		size = n;
		rank.assign(n, 0);
		parent.assign(n, 0);
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}
	int find_set(int i) {
		return (parent[i] == i) ? i:(parent[i] = find_set(parent[i]));
	}
	bool is_same_set(int i, int j) {
		return find_set(i) == find_set(j);
	}
	void union_join(int i, int j) {
		if (!is_same_set(i, j)) {
			int x = find_set(i);
			int y = find_set(j);
			if (rank[x] > rank[y]) {
				parent[y] = x;
			} else {
				parent[x] = y;
				if (rank[x] == rank[y]) {
					rank[y]++;
				}
			}
		}
	}
	int result() {
		int it = 0;
		for (int i = 0; i < size; i++) {
			if (parent[i] == i) {
				it += 1;
			}
		}
		return it;
	}
};

int main() {
	int idx = 0;
	while (1) {
		int n, m;
		int a, b;
		cin >> n >> m;
		if (n + m == 0) {
			break;
		}
		cout << "Case " << ++idx << ": ";
		UnionFind case1(n);
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			case1.union_join(a-1, b-1);
		}
		cout << case1.result() << endl;
	}
	return 0;
}