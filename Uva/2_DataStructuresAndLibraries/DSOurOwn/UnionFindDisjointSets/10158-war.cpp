#include <bits/stdc++.h>
using namespace std;

class UFDS {
private:
	int size;
	vector <int> parent;
	vector <int> rank;
	vector <int> enemy;
public:
	UFDS(int n) {
		parent.assign(n,0);
		rank.assign(n, 0);
		enemy.assign(n, -1);
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}
	void print_parent() {
		for(auto i:parent) {
			cout << i << " ";
		}
		cout << endl;
	}
	void print_enemy() {
		for(auto i:enemy) {
			cout << i << " ";
		}
		cout << endl;	
	}
	int findset(int a) {
		return (parent[a] == a?a:(parent[a] = findset(parent[a])));
	}

	int findenemy(int a) {
		return (parent[a] == a?enemy[a]:enemy[a] = findenemy(parent[a]));
	}

	bool is_same_set(int a, int b) {
		return findset(a) == findset(b);
	}
	void friend_set(int a, int b) {
		if (a == -1 || b == -1) {
			return;
		}
		int x = findset(a);
		int y = findset(b);
		if(!is_same_set(x, y)) {
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

	int make_friend(int a, int b) {
		int x = findset(a);
		int y = findset(b);
		int x1 = findenemy(a);
		int y1 = findenemy(b);
		// cout << x << " " << y << endl;
		if (findenemy(x) == y || findenemy(y) == x) {
			return -1;
		}
		friend_set(x, y);
		friend_set(x1, y1);	
		if (x1 != -1) {
			enemy[findset(x)] = findset(x1);
			enemy[findset(x1)] = findset(x);
		} 
		if (y1 != -1) {
			enemy[findset(y)] = findset(y1);
			enemy[findset(y1)] = findset(y);	
		}
		return 1;
	}
	int enemy_set(int a, int b) {
		if (is_same_set(a, b)) {
			return -1;
		}
		int x = findenemy(a);
		int y = findenemy(b);
		int x1 = findset(a);
		int y1 = findset(b);
		friend_set(x, y1);
		friend_set(y, x1);
		enemy[findset(x1)] = findset(y1);
		enemy[findset(y1)] = findset(x1);

		return 1;
	}

	int is_friend(int a, int b) {
		return is_same_set(a, b);
	}

	int is_enemy(int a, int b) {
		int x = findset(a);
		int y = findset(b);
		return findenemy(x) == y || findenemy(y) == x;
	}
};

int main() {
	int n; 
	cin >> n;
	UFDS case1(n);
	int a, b, c;
	cin >> a >> b >> c;
	while(a + b + c != 0) {
		if (a == 1) {
			int r = case1.make_friend(b, c);
			if (r == -1) {
				cout << -1 << endl;
			}
		} else if (a == 2) {
			int r = case1.enemy_set(b, c);
			if (r == -1) {
				cout << -1 << endl;
			}
		} else if (a == 3) {
			if (case1.is_friend(b, c)) {
				cout << 1 << endl;
			} else {
				cout << 0 << endl;
			}
		} else if (a == 4) {
			if (case1.is_enemy(b, c)) {
				cout << 1 << endl;
			} else {
				cout << 0 << endl;
			}
		}
		cin >> a >> b >> c;
	}
	return 0;
}