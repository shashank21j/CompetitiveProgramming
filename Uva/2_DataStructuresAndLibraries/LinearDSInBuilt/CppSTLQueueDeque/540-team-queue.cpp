#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.sync_with_stdio(0);cin.tie(0);
	int t;
	int idx = 0;
	while (cin >> t) {
		if (t == 0) {
			break;
		}
		int team_count;
		int element;
		map <int, int> user_to_team;
		map <int, queue<int> > data;
		queue <int> global;
		for (int i = 0; i < t; i++) {
			cin >> team_count;
			for (int j = 0; j < team_count; j++) {
				cin >> element;
				user_to_team[element] = i;
			}
		}
		cout << "Scenario #" << ++idx << endl;
		string command;
		while (cin >> command) {
			if (command == "STOP") {
				break;
			} else if (command == "DEQUEUE") {
				cout << data[global.front()].front() << endl;
				data[global.front()].pop();
				if (data[global.front()].empty()) {
					global.pop();
				}
			} else if (command == "ENQUEUE") {
				cin >> element;
				int team = user_to_team[element];
				if (data.find(team) == data.end() || data[team].empty()) {
					global.push(team);
					data[team].push(element);
				} else {
					data[team].push(element);
				}
			}
		}
		cout << endl;
	}
	return 0;
}