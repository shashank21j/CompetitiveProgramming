#include <bits/stdc++.h>
using namespace std;
char fun(char i) {
	if (i <= 'z' && i >= 'a') {
		return i;
	} else if (i >= 'A' && i <= 'Z') {
		return i + 32;
	} else {
		return ' ';
	}
}
string clean(string s) {
	string res = "";
	bool flag = false;
	for (auto i:s) {
		if (flag) {
			flag = false;
			if (i == '\n') {
				continue;
			} else {
				res += '-';
				res += fun(i);
			}
		} else if (i == '-'){
			flag = true;
		} else {
			res += fun(i);
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