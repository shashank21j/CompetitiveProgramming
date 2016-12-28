#include <bits/stdc++.h>

using namespace std;

pair <int, int> split(string s) {
	int a, b;
	stringstream ss;
	ss.str("");
	ss.clear();
	ss.str(s);
	ss >> a;
	ss >> b;
	return make_pair(a, b);
}
int main() {
	int t;
	cin >> t;
	string inp;
	getline(cin, inp);
	getline(cin, inp);
	while (t--) {
		int p, n;
		getline(cin, inp);
		set < set< int> > result;
		pair<int, int> item = split(inp);
		p = item.first;
		n = item.second;
		map <int, set<int> > opinions;
		getline(cin, inp);
		while(inp != "") {
			pair<int, int> item = split(inp);
			opinions[item.first].insert(item.second);
			getline(cin, inp);
		}
		int cnt = 0;
		for (auto i: opinions) {
			cnt += 1;
			result.insert(i.second);
		}
		int res = (int)result.size();
		if (cnt < p) res += 1;
		cout << res << endl;
		if (t > 0) {
			cout << endl;
		}
	}
	return 0;
}