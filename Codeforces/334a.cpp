#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < (n*n)/2 +1; i+= n/2 ) {
		for (int j = i; j< i + n/2 ; j++) {
			cout<<j<<" "<<n*n - j + 1<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*
1 2 15 16
3 4 13 14
5 6 11 12
7 8 9 10
*/