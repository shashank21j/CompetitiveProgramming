#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
	string inp, inp1, inp2;
	getline(cin, inp);
	unordered_map <string, string> slogan;
	while(n--) {
		getline(cin, inp1);
		getline(cin, inp2);
		slogan[inp1] = inp2;
	}
	int m;
	cin >> m;
	getline(cin, inp);
	while (getline(cin, inp1)) {
		cout << slogan[inp1] << endl;
	}
	return 0;
}