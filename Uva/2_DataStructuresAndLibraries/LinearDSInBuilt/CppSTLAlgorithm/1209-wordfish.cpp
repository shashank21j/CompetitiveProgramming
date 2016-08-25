#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;

	while(cin >> s) {
		int sz = (int)s.length();
		string t = s;
		int cnt = 0;
		vector <string> final = {s};
		while (prev_permutation(t.begin(), t.end())) {
			if (cnt >= 10) {
				break;
			}
			cnt += 1;
			final.push_back(t); 
		}
		cnt = 0;
		while(next_permutation(s.begin(), s.end())) {
			if (cnt >= 10) {
				break;
			}
			cnt += 1;
			final.push_back(s);
		}

		sort(final.begin(), final.end());
		int maxi = -1;
		string res_word = "";
		for (auto word:final) {
			int d = INT_MAX;
			for (int j = 1; j < sz; j++) {
				d = min(d, abs(word[j] - word[j-1]));
			}
			if (d > maxi) {
				maxi = d;
				res_word = word;
			}
		}
		cout << res_word << maxi << endl;
	}
	return 0; 
}