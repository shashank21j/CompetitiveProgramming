#include <bits/stdc++.h>
using namespace std;
bool iscapital(string s) {
	if (isupper(s[0])) {
		return true;
	} else {
		return false;
	}
}

bool issmall(string s) {
	if (islower(s[0])) {
		return true;
	} else {
		return false;
	}
}
int main() {
	string inp;
	while(getline(cin, inp)) {
		if (inp == "0") {
			break;
		}
		vector <string> projects;
		map <string, set<string> > records;
		string current_project = inp;
		projects.push_back(current_project);
		map <string, string> reverse_lookup;
		set <pair<int, string> > result;
		while(getline(cin, inp)) {
			if (inp == "1") {
				break;
			}
			if (iscapital(inp)) {
				current_project = inp;
				projects.push_back(current_project);
			} else if (issmall(inp)) {
				if (records[current_project].find(inp) != records[current_project].end()) {
					continue;
				}
				if (reverse_lookup.find(inp) == reverse_lookup.end()) {
					records[current_project].insert(inp);
					reverse_lookup[inp] = current_project;
				} else {
					records[reverse_lookup[inp]].erase(inp);
				}				
			}
		}
		for (auto i:projects) {
			result.insert(make_pair(-1*(int)records[i].size(), i));
		}
		for (auto i:result) {
			cout << i.second << " " << -1*i.first << endl;
		}
	}
	return 0;
}