#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int temp;
	int odd_count = 0,even_count = 0;
	for (int i = 0; i < n; ++i) {
		cin>>temp;
		if (temp%2==0) {
			even_count++;
		}
		else {
			odd_count++;
		}
	}
	if (odd_count%2 == 1) {
		cout<<odd_count<<endl;
	}
	else {
		cout<<even_count<<endl;
	}
	return 0;
}