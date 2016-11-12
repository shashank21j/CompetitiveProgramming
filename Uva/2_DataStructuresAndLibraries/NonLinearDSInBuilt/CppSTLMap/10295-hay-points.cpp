#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n; 
	cin >> m >> n;
	string s;
	int val;
	unordered_map <string, int> dic;
	while (m--) {
		cin >> s >> val;
		dic[s] = val;
	}

	while (n--) {
		cin >> s;
		val = 0;
		while (s != ".") {
			val += dic[s];
			cin >> s;			
		}
		cout << val << endl;
	}
	return 0;
}