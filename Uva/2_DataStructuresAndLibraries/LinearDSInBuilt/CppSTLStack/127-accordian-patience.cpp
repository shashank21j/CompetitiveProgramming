#include <bits/stdc++.h>
using namespace std;

bool move_possible(string a, string b) {
	if (a[0] == b[0] || a[1] == b[1]) {
		return true;
	} else {
		return false;
	}
}
int main() {
	string card;
	while (1) {
		vector <vector<string> >  deck(52);
		cin >> card;
		if (card == "#") {
			break;
		} 
		deck[0].push_back(card);
		for (int i = 1; i < 52; i++) {
			cin >> card;
			deck[i].push_back(card);
		}
		bool flag = true;
		while (flag) {
			flag = false;
			for (int i = 0; i < (int)deck.size(); i++) {
				if (i > 2 && move_possible(deck[i].back(), deck[i - 3].back())) {
					flag = true;
					deck[i - 3].push_back(deck[i].back());
					deck[i].pop_back();
					if (deck[i].empty()) {
						deck.erase(deck.begin() + i);
					}
					break;
				} else if (i > 0 && move_possible(deck[i].back(), deck[i - 1].back())) {
					flag = true;
					deck[i - 1].push_back(deck[i].back());
					deck[i].pop_back();
					if (deck[i].empty()) {
						deck.erase(deck.begin() + i);
					}
					break;
				}
			}
		}
		vector <int> result;
		for (int i = 0; i < 52; i++) {
			if (!deck[i].empty()) {
				result.push_back((int)deck[i].size());
			}
		}
		if (result.size() == 1) {
			cout << (int)result.size() << " pile remaining:";	
		} else {
			cout << (int)result.size() << " piles remaining:";	
		}
		
		for (auto i: result) {
			cout <<" " << i;
		}
		cout << endl;
	}
	return 0;
}