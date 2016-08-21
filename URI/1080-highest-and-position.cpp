#include <bits/stdc++.h>
using namespace std;

int main() {
	int maxi = -9;
	int temp;
	int pos = -1;
	for (int i = 0; i < 100; i++) {
		cin >> temp;
		if (temp>maxi) {
			maxi = temp;
			pos = i+1;
		}
	}
	cout << maxi << endl;
	cout << pos << endl;
	return 0;
}
