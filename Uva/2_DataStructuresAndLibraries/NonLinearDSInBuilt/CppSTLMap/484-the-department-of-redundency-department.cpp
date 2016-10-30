#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	vector <int> numbers;
	map <int, int> freq;
	while (cin >> n) {
		if (freq.find(n) == freq.end()) {
			freq[n] = 1;
			numbers.push_back(n);
		} else {
			freq[n] += 1;
		}
	}
	for (auto i:numbers) {
		cout << i << " " << freq[i] << endl;
	}
	return 0;
}