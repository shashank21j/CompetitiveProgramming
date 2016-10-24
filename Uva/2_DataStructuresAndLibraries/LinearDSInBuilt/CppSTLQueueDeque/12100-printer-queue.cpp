#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector <int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int timer = 0;
		queue <pair<int, int> > qq;

		for (int i = 0; i < n; i++) {
			qq.push(make_pair(arr[i], i));
		}
		sort(arr.begin(), arr.end());
		while (true) {
			pair <int, int> temp = qq.front();
			qq.pop();
			if (temp.first == arr.back()) {
				timer += 1;
				if (temp.second == m) {
					break;
				}
				arr.pop_back();
			} else {
				qq.push(temp);
			}
		}
		cout << timer << endl;
	}
	return 0;
}