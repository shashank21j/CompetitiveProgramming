#include <bits/stdc++.h> 

using namespace std;

int find_set(int i, vector<int> &p) {
	return (p[i] == i) ? i: (p[i] = find_set(p[i], p));
}
bool is_same_set(int i, int j, vector<int> &p) {
	return find_set(i, p) == find_set(j, p);
}
void union_join(int i, int j, vector <int> &r, vector<int> &p) {
	if (!is_same_set(i, j, p)) {
		int x = find_set(i, p);
		int y = find_set(j, p);
		if (r[x] > r[y]) {
			p[y] = x;
		} else {
			p[x] = y;
			if (r[x] == r[y]) {
				r[y]++;
			}
		}
	}
}

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
		vector <int> p(n,0);
		vector <int> r(n,0);
		for (int i = 0; i < n; i++) {
			p[i] = i;
		}
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			union_join(a-1, b-1, r, p);
		}
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (p[i] == i) {
				count += 1;
			}
		}
		cout << count << endl;
	}
	return 0;
}