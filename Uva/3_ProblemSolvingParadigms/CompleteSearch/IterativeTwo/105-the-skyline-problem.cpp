#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; 
	vector <int> buildings(10000, 0);
	int maxc = -1; 
	while(cin >> a >> b >> c) {
		for (int i = a; i < c; i++) {
			buildings[i] = max(buildings[i], b);
		}
		maxc = max(maxc, c);
	}
	int prev = buildings[1];
	bool flag = true;
	for (int i = 1; i <= maxc; ) {
		if (flag) {
			flag = false;
		} else {
			cout << " ";
		}
		cout << i << " " << prev;
		while(prev == buildings[i]) {
			i += 1;
		}
		prev = buildings[i];
	}
	cout << endl;
	return 0;
}