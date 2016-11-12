#include <bits/stdc++.h>

using namespace std;
int integer(string s) {
	int res = 0;
	for (auto i:s) {
		res = res*10 + (i - 48);
	}
	return res;
}

stringstream ss;
double epsilon = 0.000001;
int main() {
	int p, g;
	cin >> p >> g;
	map <string, double> votes;
	string name;
	double vote;
	while(p--) {
		cin >> name >> vote;
		votes[name] = vote;
	}
	string inp;
	getline(cin, inp);
	string element;
	int idx = 0;
	while(g--) {
		getline(cin, inp);
		ss.str("");
		ss.clear();
		ss.str(inp);
		vector <string> vals;
		while (ss >> element) {
			vals.push_back(element);
		}
		double vote_sum = 0.0;
		for (int i = 0; i < (int)vals.size() - 2; i += 2) {
			vote_sum += votes[vals[i]];
		}
		int guess = integer(vals.back());
		string oper = vals[(int)vals.size() - 2];
		if (oper == ">") {
			if (vote_sum - guess > epsilon) {
				cout << "Guess #" << ++idx << " was correct." << endl;
			} else {
				cout << "Guess #" << ++idx << " was incorrect." << endl;
			}
		} else if (oper == "<") {
			if (guess - vote_sum > epsilon) {
				cout << "Guess #" << ++idx << " was correct." << endl;
			} else {
				cout << "Guess #" << ++idx << " was incorrect." << endl;
			}
		} else if (oper == ">=") {
			if (vote_sum - guess > -0.0000001) {
				cout << "Guess #" << ++idx << " was correct." << endl;
			} else {
				cout << "Guess #" << ++idx << " was incorrect." << endl;
			}
		} else if (oper == "<=") {
			if (guess - vote_sum >= -0.0000001) {
				cout << "Guess #" << ++idx << " was correct." << endl;
			} else {
				cout << "Guess #" << ++idx << " was incorrect." << endl;
			}
		} else if (oper == "=") {
			if (abs(vote_sum - guess) < 0.0000001) {
				cout << "Guess #" << ++idx << " was correct." << endl;
			} else {
				cout << "Guess #" << ++idx << " was incorrect." << endl;
			}
		}
	}
	return 0;
}