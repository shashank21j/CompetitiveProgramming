#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, n;
	cin >> a >> n;
	while(n <= 0) {
		cin >> n;
	}
	int sum = a;
	for (int i = a+1; i < a+n; i++) {
		sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}
