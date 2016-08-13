#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string command;
	int source, destination;
	string type;
	vector <vector <int> > boxes(n);
	vector <int> track(n);
	for (int i = 0; i < n; i++) {
		boxes[i].push_back(i);
		track[i] = i;
	}

	while (cin >> command) {
		if (command == "quit") {
			break;
		} 
		cin >> source >> type >> destination;
		int s1 = track[source];
		int d1 = track[destination];
		if (s1 == d1) {
			continue;
		}
		if (command == "move") {
			if (type == "over") {
				while(boxes[s1].back() != source) {
					track[boxes[s1].back()] = boxes[s1].back();
					boxes[boxes[s1].back()].push_back(boxes[s1].back());
					boxes[s1].pop_back();
				}
				track[boxes[s1].back()] = d1;
				boxes[d1].push_back(source);
				boxes[s1].pop_back();
			} else if (type == "onto") {
				while(boxes[s1].back() != source) {
					track[boxes[s1].back()] = boxes[s1].back();
					boxes[boxes[s1].back()].push_back(boxes[s1].back());
					boxes[s1].pop_back();
				}
				while(boxes[d1].back() != destination) {
					track[boxes[d1].back()] = boxes[d1].back();
					boxes[boxes[d1].back()].push_back(boxes[d1].back());
					boxes[d1].pop_back();
				}
				track[boxes[s1].back()] = d1;
				boxes[d1].push_back(source);
				boxes[s1].pop_back();
			}
		} else if (command == "pile") {
			if (type == "over") {
				vector <int> temp;
				while(boxes[s1].back() != source) {
					track[boxes[s1].back()] = d1;
					temp.push_back(boxes[s1].back());
					boxes[s1].pop_back();
				}
				track[boxes[s1].back()] = d1;
				boxes[d1].push_back(source);
				boxes[s1].pop_back();
				while (!temp.empty()) {
					boxes[d1].push_back(temp.back());
					temp.pop_back();
				}
			} else if (type == "onto") {
				vector <int> temp;
				while(boxes[d1].back() != destination) {
					track[boxes[d1].back()] = boxes[d1].back();
					boxes[boxes[d1].back()].push_back(boxes[d1].back());
					boxes[d1].pop_back();
				}
				while(boxes[s1].back() != source) {
					track[boxes[s1].back()] = d1;
					temp.push_back(boxes[s1].back());
					boxes[s1].pop_back();
				}
				track[boxes[s1].back()] = d1;
				boxes[d1].push_back(source);
				boxes[s1].pop_back();
				while (!temp.empty()) {
					boxes[d1].push_back(temp.back());
					temp.pop_back();
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i << ":";
		for (int j = 0; j < boxes[i].size(); j++) {
			cout << " " << boxes[i][j];
		}
		cout << endl;
	}
	return 0;
}