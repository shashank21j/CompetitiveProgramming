#include <bits/stdc++.h>
using namespace std;

string clean(string s) {
	string res = "";
	for (auto i:s) {
		if ((i <= 'z' && i >= 'a') || (i >= 'A' && i <= 'Z')) {
			res += i;
		} else {
			res += " ";
		}
	}
	return res;
}
stringstream ss;
int main() {
	int n;
	cin >> n;
	while (n--) {
		int c;
		cin >> c;
		map <string, vector<string> > word_cata;
		map <string, int> limit;
		vector <string> order;
		while(c--) {
			string cata;
			int w, p;
			cin >> cata >> w >> p;
			string key_word;
			limit[cata] = p;
			order.push_back(cata);
			set <string> temp;
			while(w--) {
				cin >> key_word;
				if (temp.find(key_word) == temp.end()) {
					word_cata[key_word].push_back(cata);
					temp.insert(key_word);	
				}
			}
		}
		string inp;
		getline(cin, inp);
		map <string, int> results;
		vector <string> ordering;
		set <string> consider;
		while(getline(cin, inp)) {
			if (inp == "") {
				break;
			}
			inp = clean(inp);
			ss.str("");
			ss.clear();
			ss.str(inp);
			string word;
			while(ss >> word) {
				string word1 = clean(word);
				if (word_cata.find(word1) != word_cata.end() && consider.find(word1) == consider.end()) {
					consider.insert(word1);
					for (auto ii:word_cata[word1]) {
						if (results.find(ii) == results.end()) {
							ordering.push_back(ii);
						}	
						results[ii] += 1;
					}
				}
			}
		}
		vector <string> otpt;
		for (auto i:order) {
			if (results[i] >= limit[i]) {
				otpt.push_back(i);
			}
		}
		for (int i = 0; i < otpt.size(); i++) {
			cout << otpt[i];
			if (i < otpt.size() - 1) {
				cout << ",";
			}
		}
		if (otpt.empty()) {
			cout << "SQF Problem.";
		}
		cout << endl;
	}
	return 0;
}