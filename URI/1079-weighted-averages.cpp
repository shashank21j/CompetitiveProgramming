#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	float a,b,c;
	cout << fixed << setprecision(1);
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		cout << (2 * a + 3 * b + 5 * c) / 10 << endl;
	}
	return 0;
}
