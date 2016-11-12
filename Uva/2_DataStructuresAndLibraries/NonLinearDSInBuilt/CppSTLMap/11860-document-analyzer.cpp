#include <bits/stdc++.h>
using namespace std;

string clean(string s) {
	string res = "";
	for (auto i:s) {
		if (i <= 122 && i >= 97) {
			res += i;
		} else {
			res += " ";
		}
	}
	return res;
}

stringstream ss;
int main() {
	std::ios::sync_with_stdio(false);
	int t;
	cin >> t;
	string inp;
	getline(cin, inp);
	int idx = 0;
	while (t--) {
		getline(cin, inp);
		vector <string> document;
		string word;
		unordered_map <string, int> rolling_window;
		while(inp != "END") {
			inp = clean(inp);
			ss.str("");
			ss.clear();
			ss.str(inp);
			while (ss >> word) {
				document.push_back(word);
			}
			getline(cin, inp);
		}
		set <string> unique_words(document.begin(), document.end());
		int unique_words_size = (int)unique_words.size();
		int document_length = (int)document.size();
		int start = 0;
		int ending = 0;
		int min_length = INT_MAX;
		pair <int, int> result;
		while(start != document_length) {
			while(rolling_window.size() != unique_words_size) {
				if (ending == document_length) {
					break;
				}
				rolling_window[document[ending]] += 1;
				ending += 1;
			}
			if (rolling_window.size() == unique_words_size && ending - start  < min_length) {
				min_length = ending - start;
				result = make_pair(start+1, ending);
			}
			rolling_window[document[start]] -= 1;
			if (rolling_window[document[start]] == 0) {
				rolling_window.erase(document[start]);
			}
			start += 1;
		}
		cout << "Document " << ++idx <<": " << result.first << " " << result.second << endl;
	}
	return 0;
}