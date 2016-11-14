#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		multiset <int> m1;
		multiset <int> m2;
		int element;
		for(int i = 0; i < n; i++) {
			cin >> element;
			m1.insert(element);
		}
		for (int i = 0; i < m; i++) {
			cin >> element;
			m2.insert(element);
		}
		multiset <int> to_remove;
		for (auto i:m1) {
			if (m2.find(i) != m2.end()) {
				to_remove.insert(i);
				m2.erase(m2.find(i));
			}
		}
		cout << (int)m1.size() + (int)m2.size() - (int)to_remove.size()<< endl;
	}
	return 0;
}