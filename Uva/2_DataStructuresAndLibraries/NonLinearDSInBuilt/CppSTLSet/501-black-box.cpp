#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector <int> numbers(n);
		vector <int> get_nums(m);
		for(int i = 0; i < n; i++) {
			cin >> numbers[i];
		}
		for(int i = 0; i < m; i++) {
			cin >> get_nums[i];
		}
		multiset <int> left;
		multiset <int> right;
		int element_count = 0;
		int ind = 0;
		int pop_counter = 1;
		for (int i = 0; i < m; i++) {
			while(element_count < get_nums[i]) {
				if (left.empty() || numbers[ind] < *left.rbegin()) {
					left.insert(numbers[ind++]);
				} else {
					right.insert(numbers[ind++]);
				}
				element_count += 1;
			}
			while((int)left.size() > pop_counter) {
				right.insert(*left.rbegin());
				left.erase(left.find(*left.rbegin()));
			}
			while((int)left.size() < pop_counter) {
				left.insert(*right.begin());
				right.erase(right.find(*right.begin()));
			}
			cout << *left.rbegin() << endl;
			pop_counter += 1;
		}
		if (t > 0) {
			cout << endl;
		}
	}
	return 0;
}