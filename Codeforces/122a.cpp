#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int div[] = {4,7,47,74,477,474,747,774,447,744,444,777};
	for (int i=0; i<12 ; i++ ) {
		if (n % div[i] == 0) {
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}