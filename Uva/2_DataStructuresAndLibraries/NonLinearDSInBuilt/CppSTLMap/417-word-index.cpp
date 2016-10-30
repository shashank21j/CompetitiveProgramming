#include <bits/stdc++.h>
using namespace std;

bool valid (string check) {
	for (int i = 1; i < (int)check.length(); i++) {
		if (check[i] <= check[i-1]) return false;
	}
	return true;
}

int main() {
	bool flag1 = true;
	map <string, int> dic;
	int counter = 1;
	for (int i1 = 0; i1 <= 26; i1++) {
		for (int i2 = 0; i2 <= 26; i2++) {
			if (i1 > 0 && i2 <= i1) continue;
			for (int i3 = 0; i3 <= 26; i3++) {
				if (i2 > 0 && i3 <= i2) continue;
				for (int i4 = 0; i4 <= 26; i4++) {
					if (i3 > 0 && i4 <= i3) continue;
					for (int i5 = 1; i5 <= 26; i5++) {
						if (i4 > 0 && i5 <= i4) continue;
						string t = "";
						if (i1 != 0) {
							t += (char)(96 + i1);
						}
						if (i2 != 0) {
							t += (char)(96 + i2);
						} 
						if (i3 != 0) {
							t += (char)(96 + i3);
						}
						if (i4 != 0) {
							t += (char)(96 + i4);
						}
						if (i5 != 0) {
							t += (char)(96 + i5);
						}
						dic[t] = counter;
						counter += 1;
					}
				}
			}
		}
	}

	string check;
	while (cin >> check) {
		if (valid(check)) {
			cout << dic[check] << endl;
		} else {
			cout << 0 << endl;
		}
	}
	return 0;
}