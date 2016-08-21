#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int cnt = 1;
	while (m>=cnt) {
		m -= cnt;
		cnt++;
		if (cnt>n) cnt %= n;
	}
	cout<<m<<endl;
	return 0;
}