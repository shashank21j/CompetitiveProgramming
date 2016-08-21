#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int odd_iter = 0;
	int odd = 0, even= 0,temp;
	int even_iter = 0;
	for (int i=0;i<n;i++) {
		cin>>temp;
		if (temp%2 == 0) {
			even_iter = i+1;
			even++;
		}
		else {
			odd_iter = i+1;
			odd++;
		}
	}
	if (odd>1) {
		cout<<even_iter<<endl;
	}
	else {
		cout<<odd_iter<<endl;
	}
	return 0;
}