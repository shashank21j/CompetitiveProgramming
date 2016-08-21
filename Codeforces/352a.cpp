#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int temp;
	int five = 0;
	int zero = 0;
	for (int i = 0 ; i<n; i++) {
		cin>>temp;
		if (temp ==0) {
			zero++;
		}
		else if (temp == 5) {
			five++;
		}
	}
	if (five/9 == 0  && zero>0) {
		cout<<0<<endl;
	}
	else if (zero == 0) {
		cout<<"-1"<<endl;
	}
	else {
		for (int i = 0;i < 9*(five/9) ; i++ ) {
			cout<<"5";
		}
		for (int i=0;i<zero;i++) {
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}