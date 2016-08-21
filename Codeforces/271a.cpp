#include <bits/stdc++.h>

using namespace std;
bool isDistinct(int a) {
	set <int> check;
	int cnt = 0;
	while(a!=0) {
		check.insert(a%10);
		a/=10;
		cnt++;
	}
	if (cnt == check.size()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n;
	cin>>n;
	n++;
	while(!isDistinct(n)) n++;
	cout<<n;
	return 0;
}