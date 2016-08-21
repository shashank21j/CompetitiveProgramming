#include <bits/stdc++.h>

using namespace std;
int main() {
	long long int n;
	cin >> n;
	int cnt = 0;
	while (n!=0) {
		if (n%10 == 7 || n%10 == 4) cnt++;
		n/=10;
	}
	if (cnt == 7 || cnt ==4) {
		cout<<"YES\n";
	}
	else cout<<"NO\n";
	return 0;
}