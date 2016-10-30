#include <bits/stdc++.h>
using namespace std;

string clean (string s) {
	string res = "";
	for (auto i:s) {
		if (i == 44 || i == 46 || i == 58 || i == 59 || i == 33
			|| i == 63 || i == 34 || i == 32 || i == 40 || i == 41
			|| i == 10 || i == 9) {
			continue;
		} else if (i <= 90 && i >= 65) {
			res += (char)(i + 32);
		} else {
			res += i;
		}
	}
	return res;
}
int main() {
	string s;
	while (cin >> s) {
		if (s == "****END_OF_INPUT****") {
			break;
		}
		map <string, int> inp;
		inp[clean(s)] += 1;
		int total_words = 1;
		while(cin >> s) {
			if (s == "****END_OF_TEXT****") {
				break;
			}
			inp[clean(s)] += 1;
			total_words += 1;
		}
		double e = 0;
		for (auto i:inp) {
			e += i.second*log10((double)total_words/(double)i.second);
		}
		e /= (double)total_words;
		double e_rel = (e*100)/log10(total_words);
		cout << total_words << " " << fixed << setprecision(1) << e << " " << (int)round(e_rel) << endl;
	}
	return 0;
}