#include <bits/stdc++.h>

using namespace std;

class UFDS {
private:
	int size;
	vector <int> parent;
	vector <int> rank;
	vector <int> counts;
public:
	UFDS(int n) {
		size = n;
		parent.assign(n, 0);
		counts.assign(n, 1);
		rank.assign(n, 0);
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}
	int findset(int a) {
		return (a == parent[a])? a: parent[a] =(findset(parent[a]));
	}

	bool is_same_set(int a, int b) {
		return findset(a) == findset(b);
	}

	
	void union_set(int a, int b) {
		if (!is_same_set(a, b)) {
			int x = findset(a);
			int y = findset(b);
			if (rank[x] > rank[y]) {
				parent[y] = x;
				counts[x] += counts[y];
			} else { 
				parent[x] = y;
				counts[y] += counts[x];
				if (rank[x] == rank[y]) {
					rank[y]++;
				}
			}
		}
	}
	int find_maxi() {
		int maxi = -1;
		for (int i = 0; i < size; i++) {
			if (i == parent[i]) {
				maxi = max(maxi, counts[i]);
			}
		}
		return maxi;
	}
};

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		int a, b;
		cin >> n >> m; 
		UFDS case1(n);
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			case1.union_set(a - 1, b - 1);
		}
		cout << case1.find_maxi() << endl;
	}
	return 0;
}

