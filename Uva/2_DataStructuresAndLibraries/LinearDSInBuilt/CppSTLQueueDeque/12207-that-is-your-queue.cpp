#include <bits/stdc++.h>
using namespace std;

int main () {
	int p, c;
	int idx = 0;
	while (cin >> p >> c) {
		if (p + c == 0) break;
		unordered_map <int, int> ignore;
		unordered_map <int, int> urgent;
		deque <int> qq;
		for (int i = 1; i <= min(p, c); i++) {
			qq.push_back(i);
		}
		char command;
		int value;
		cout << "Case " << ++idx << ":" << endl;
		bool flag = false;
		for (int i = 0; i < c; i++) {
			cin >> command;
			if (command == 'E') {
				cin >> value;
				qq.push_front(value);
				ignore[value] += 1;
				urgent[value] = 1;
			} else {
				while (ignore[qq.front()] > 0 && urgent[qq.front()] == 0) {
					ignore[qq.front()] -= 1;
					qq.pop_front();
				}  
				urgent[qq.front()] = 0;
				cout << qq.front() << endl;
				qq.push_back(qq.front());
				qq.pop_front();
			}
		}
	}
	return 0;
}