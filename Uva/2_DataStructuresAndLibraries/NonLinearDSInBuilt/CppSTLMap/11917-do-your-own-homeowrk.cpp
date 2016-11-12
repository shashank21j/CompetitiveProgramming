#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	int idx = 0;
	while(t--) {
		int n;
		cin >> n;
		string subject;
		int days;
		unordered_map <string, int> friend_homework;
		for (int i = 0; i < n; i++) {
			cin >> subject >> days;
			friend_homework[subject] = days; 
		}
		int d; 
		cin >> d;
		cin >> subject;
		cout << "Case " << ++idx << ": ";
		if (friend_homework.find(subject) == friend_homework.end() || friend_homework[subject] > d + 5) {
			cout << "Do your own homework!" << endl;
		} else if (friend_homework[subject] > d) {
			cout << "Late" << endl;
		} else {
			cout << "Yesss" << endl;
		}
	}
	return 0;
}