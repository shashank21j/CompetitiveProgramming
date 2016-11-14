#include <bits/stdc++.h>
using namespace std;

string clean(string s) {
	string res = "";
	for (auto i:s) {
		if (i <= 'z' && i >= 'a') {
			res += i;
		} else if (i >= 'A' && i <= 'Z') {
			res += i + 32;
		} else {
			res += " ";
		}
	}
	return res;
}
stringstream ss;
int main () {
	string inp;
	getline(cin, inp, '\0');
	inp = clean(inp);
	ss.str(inp);
	set <string> dic;
	string word;
	while (ss >> word) {
		dic.insert(word);
	}
	for (auto i:dic) {
		cout << i << endl;
	}
	return 0;
}