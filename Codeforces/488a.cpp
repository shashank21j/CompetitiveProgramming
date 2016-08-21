#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
	if (n<0) n*= -1;
	while (n != 0) {
		if (n%10 == 8) return true;
		n/=10;
	}
	return false;
}
int main() {
	int n;
	cin>>n;
	int t = n;
	n+=1;
	while (!check(n)) {
		n++;
	}
	cout<<n - t<<endl;
	return 0;
}