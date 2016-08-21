#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int a1,a2,a3;
	int b1,b2,b3;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	int sum_cup = a1 + a2 + a3; 
	int sum_med = b1 + b2 + b3;
	if ((n - (sum_cup/5 + (int)(sum_cup%5 != 0)) - (sum_med/10 + (int)(sum_med%10 != 0))) >= 0 ) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}