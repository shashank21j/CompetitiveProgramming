#include <bits/stdc++.h>

using namespace std;

stringstream ss;
int main () {
	std::ios::sync_with_stdio(false);
	string a, b; 
	string inp;
	getline(cin, inp);
	unordered_map <string, string> dic;
	while(inp != "") {
		ss.str("");
		ss.clear();
		ss.str(inp);
		ss >> a >> b;
		dic[b] = a;
		getline(cin, inp);
	}
	while (getline(cin, inp)) {
		if (dic.find(inp) != dic.end()) {
			cout << dic[inp] << endl; 
		} else {
			cout << "eh" << endl;
		}
	}
	return 0;
}