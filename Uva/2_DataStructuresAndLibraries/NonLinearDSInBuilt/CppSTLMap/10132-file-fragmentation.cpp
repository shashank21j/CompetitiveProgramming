#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	string inp;
	getline(cin, inp);
	getline(cin, inp);
	while(t--) {
		int total_length = 0;
		int word_count = 0;
		map <string, int> hashes;
		map <int, vector<string> > data;
		getline(cin, inp);
		while (inp != "") {
			word_count += 1;
			total_length += (int)inp.length();
			data[inp.length()].push_back(inp);
			getline(cin, inp);
		}
		int result_length = (total_length * 2) / word_count;
		for (auto i:data) {
			for (auto j:i.second) {
				bool flag = true;
				for (auto k:data[result_length - i.first]) {
					if (i.first * 2 == result_length && k == j && flag) {
						flag = false;
						continue;
					}
					hashes[j+k] += 1;
					hashes[k+j] += 1;
				}
			}
		}
		int max_val = -1;
		string res;
		for (auto i:hashes) {
			if (i.second > max_val) {
				max_val = i.second;
				res = i.first;
			}
		}
		cout << res << endl;
		if (t > 0) {
			cout << endl;
		}
	}
	return 0;
}