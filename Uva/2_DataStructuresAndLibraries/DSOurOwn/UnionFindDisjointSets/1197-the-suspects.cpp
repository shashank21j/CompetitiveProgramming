#include <bits/stdc++.h>
using namespace std;

class UFDS {
private:
	int size;
	vector <int> parent;
	vector <int> rank;
public:
	UFDS(int n) {
		size = n;
		parent.assign(n, 0);
		rank.assign(n, 0);
		for (int i = 0; i < size; i++) {
			parent[i] = i;
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
	int count_sars() {
		int counter = 0;
		for (int i = 0; i < size; i++) {
			if (findset(i) == findset(0)) {
				counter += 1;
			}
		}
		return counter;
	}
};

int main() {
	int n, m;
	while(cin >> n >> m) {
		if (n + m == 0) {
			break;
		}
		UFDS case1(n);
		int k;
		int ele1, ele2;
		for (int i = 0; i < m; i++) {
			cin >> k;
			cin >> ele1;
			for (int j = 0; j < k - 1; j++) {
				cin >> ele2;
				case1.union_set(ele1, ele2);
			}
		}
		cout << case1.count_sars() << endl;
	}
	return 0;
}