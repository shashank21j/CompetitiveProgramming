#include <bits/stdc++.h>
using namespace std;
string capital(string s) {
	string res = "";
	for (auto i:s) {
		res += toupper(i);
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	int m, n, b;
	string binder;
	while(t--) {
		getline(cin, binder);
		getline(cin, binder);
		cin >> m >> n >> b;
		unordered_map <string, int> prices;
		string item;
		int cost;
		set <pair<int, string> > result;
		for (int i = 0; i < m; i++) {
			cin >> item >> cost;
			prices[item] = cost;
		}
		for (int i = 0; i < n; i++) {
			string recipe; 
			getline(cin, recipe);
			getline(cin, recipe);
			int no_of_ingredients;
			cin >> no_of_ingredients;
			int counts;
			int net_cost = 0;
			for (int j = 0; j < no_of_ingredients; j++) {
				cin >> item >> counts;
				net_cost += (prices[item] * counts);
			}
			if (net_cost <= b) {
				result.insert(make_pair(net_cost, recipe));
			}
		}
		cout << capital(binder) << endl;
		for (auto i:result) {
			cout << i.second << endl;
		}
		if (result.empty()) {
			cout << "Too expensive!" << endl;
		}
		cout << endl;
	}
	return 0;
}