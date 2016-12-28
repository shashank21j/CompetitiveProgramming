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
		parent.assign(size, 0);
		counts.assign(size, 1);
		for(int i = 0; i < size; i++) {
			parent[i] = i;
		}
	}
	int findset(int a) {
		return (parent[a] == a?a:(parent[a] = findset(parent[a])));
	} 
	bool is_same_set(int a, int b) {
		return findset(a) == findset(b);
	}
	void union_set(int a, int b) {
		int x = findset(a);
		int y = findset(b);
		if (!is_same_set(a, b)) {
			parent[x] = y;
			counts[y] = counts[y] + counts[x];
		}
	}
	int result() {
		int maxi = -1;
		for (int i = 0; i < size; i++) {
			maxi = max(maxi, counts[i]);
		}
		return maxi;
	}
};

int main() {
	int n,r;
	while(cin >> n >> r) {
		if (n + r == 0) {
			break;
		}
		map <string, int> name_map;
		string name, name1;
		for(int i = 0; i < n; i++) {
			cin >> name;
			name_map[name] = i;
		}
		UFDS case1(n);
		for(int i = 0; i < r; i++) {
			cin >> name >> name1;
			case1.union_set(name_map[name], name_map[name1]);
		}
		cout << case1.result() << endl;
	}
	return 0;
}