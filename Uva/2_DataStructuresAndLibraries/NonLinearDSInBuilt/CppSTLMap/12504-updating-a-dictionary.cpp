#include <bits/stdc++.h>

using namespace std;

map <string, string> split(string s) {
	map <string, string> res;
	int flag = 0;
	string r1 = "";
	string r2 = "";
	for (int i = 1; i < s.length() - 1; i++) {
		if (flag == 0) {
			if (s[i] == ':') {
				flag ^= 1;
				continue;
			}
			r1 += s[i];
		} else {
			if (s[i] == ',') {
				flag ^= 1;
				res[r1] = r2;
				r1 = "";
				r2 = "";
				continue;
			}
			r2 += s[i];
		}
	}
	if (s.length() > 2) {
		res[r1] = r2;
	}
	return res;
}
int main() {
	int t;
	cin >> t;
	string inp1, inp2;
	while(t--) {
		bool flag = false;
		cin >> inp1 >> inp2;
		map <string, string> m1 = split(inp1);
		map <string, string> m2 = split(inp2);
		set <string> deleted;
		set <string> modi;
		set <string> inserted;
		for (auto i:m1) {
			if (m2.find(i.first) == m2.end()) {
				flag = true;
				deleted.insert(i.first);
			} else if (m2[i.first] != m1[i.first]) {
				flag = true;
				modi.insert(i.first);
			}
		}
		for (auto i:m2) {
			if (m1.find(i.first) == m1.end()) {
				flag = true;
				inserted.insert(i.first);
			}
		}
		// cout << "yo" << endl;
		if (!flag) {
			cout << "No changes" << endl;
		} else {
			if (!inserted.empty()) {
				cout << "+";
				for (auto i:inserted) {
					if (i == *inserted.rbegin()) {
						cout << i << endl;
					} else {
						cout << i << ",";
					}
				}
			}
			if (!deleted.empty()) {
				cout << "-";
				for (auto i:deleted) {
					if (i == *deleted.rbegin()) {
						cout << i << endl;
					} else {
						cout << i << ",";
					}
				}
			}
			if (!modi.empty()) {
				cout << "*";
				for (auto i:modi) {
					if (i == *modi.rbegin()) {
						cout << i << endl;
					} else {
						cout << i << ",";
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}