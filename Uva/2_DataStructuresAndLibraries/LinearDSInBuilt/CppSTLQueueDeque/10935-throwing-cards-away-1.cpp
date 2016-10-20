#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	while(cin >> n) {
		if (n == 0) {
			break;
		}
		queue <int> cards;
		for (int i = 1; i <= n; i++) {
			cards.push(i);
		}
		vector <int> discards;
		while(cards.size() >= 2) {
			discards.push_back(cards.front());
			cards.pop();
			cards.push(cards.front());
			cards.pop();
		}
		cout << "Discarded cards:";
		for (int i = 0; i < (int)discards.size(); i++) {
			cout << " " << discards[i];
			if (i < (int)discards.size() - 1) {
				cout << ",";
			}
		}
		cout << endl;
		cout << "Remaining card: ";
		cout << cards.front() << endl;
	}
	return 0;
}