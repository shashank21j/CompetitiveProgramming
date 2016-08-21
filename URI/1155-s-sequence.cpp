#include <bits/stdc++.h>
using namespace std;

int main() {
	double S = 0;
	for (int i = 1; i < 101; i++) {
		S += 1.0/i;
	}
	cout << fixed << setprecision(2);
	cout << S << endl;
	return 0;
}
