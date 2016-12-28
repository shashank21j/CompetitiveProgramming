#include <bits/stdc++.h>

using namespace std;
class UFDS {
private:
	int size;
	vector <int> rank;
	vector <int> parent;
	vector <int> debt;
public:
	UFDS(int n) {
		size = n;
		rank.assign(n, 0);
		parent.assign(n, 0);
		debt.assign(n, 0);
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}
	void update_debt(vector <int> &dbt) {
		for (int i = 0; i < size; i++) {
			debt[i] = dbt[i];
		}
	}
	int findset(int a) {
		return (a == parent[a]?a:(parent[a] = findset(parent[a])));
	}
	bool is_same_set(int a, int b) {
		return findset(a) == findset(b);
	}
	void union_set(int a, int b) {
		int x = findset(a);
		int y = findset(b);
		if (!is_same_set(x, y)) {
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
	bool result() {
		vector <int> res(size, 0);
		for (int i = 0; i < size; i++) {
			int x = findset(i);
			res[x] += debt[i];
		}
		for (auto it:res) {
			if (it != 0) {
				return false;
			}
		}
		return true;
	}
};

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		UFDS case1(n);
		vector <int> dbt(n);
		for (int i = 0; i < n; i++) {
			cin >> dbt[i];
		}
		case1.update_debt(dbt);
		int a, b;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			case1.union_set(a, b);
		}
		if (case1.result()) {
			cout << "POSSIBLE" << endl;
		} else {
			cout << "IMPOSSIBLE" << endl;
		}
	}
	return 0;
}