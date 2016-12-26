#include <bits/stdc++.h>
using namespace std;

stringstream ss;
int counter(string s) {
	int ele;
	ss.str("");
	ss.clear();
	ss.str(s);
	int res = 0;
	while (ss >> ele) {
		res += 1;
	}
	return res;
}

int main () {
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string inp;
		getline(cin, inp);
		vector <int> res;
		int mini = INT_MAX;
		for(int i = 0; i < n; i++) {
			getline(cin, inp);
			// cout << inp << endl;
			int cnt = counter(inp);
			if (cnt < mini) {
				res = {i + 1};
				mini = cnt;
			} else if (cnt == mini) {
				res.push_back(i + 1);
			}
		}
		for (int i = 0; i < (int)res.size(); i++) {
			cout << res[i];
			if (i < res.size() - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}