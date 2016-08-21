#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 0) {
			cout<<"NULL"<<endl;
			continue;
		}
		if (temp%2==0) {
			cout<<"EVEN ";
		}
		else {
			cout<<"ODD ";
		}
		if (temp<0) {
			cout<<"NEGATIVE"<<endl;
		}
		else {
			cout<<"POSITIVE"<<endl;
		}
	}
	return 0;
}
