#include <bits/stdc++.h>
using namespace std;

int main () {
	int no_of_cases; 
	cin >> no_of_cases;
	int idx = 0;
	while(no_of_cases--) {
		int no_of_friends;
		cin >> no_of_friends;
		map <int, set<int> > collection;
		map <int, int> global_counts;
		for (int i = 0; i < no_of_friends; i++) {
			int no_of_stamp;
			cin >> no_of_stamp;
			int stamp;
			for (int j = 0; j < no_of_stamp; j++) {
				cin >> stamp;
				if (collection[i].find(stamp) != collection[i].end()) {
					continue;
				}
				global_counts[stamp] += 1;
				collection[i].insert(stamp);
			}
		}
		map <int, int> result;
		int total = 0;
		for (auto i:collection) {
			for (auto j: i.second) {
				if (global_counts[j] == 1) {
					result[i.first] += 1;
					total += 1;
				}
			}
		}
		cout << "Case " << ++idx << ":";
		for (int i = 0; i < no_of_friends; i++) {
			cout << " " << fixed << setprecision(6) << (double)(((double)result[i]*100)/(double)total) << '%';
		}
		cout << endl;
	}
	return 0;
}