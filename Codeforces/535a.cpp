#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string tens[] = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	string ones[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen", "fourteen","fifteen", "sixteen", "seventeen","eighteen","nineteen"};
	cin>>n;
	if (n<20) {
		cout<<ones[n]<<endl;
		return 0;
	}
	cout<<tens[n/10 -2];
	if (n%10!=0) {
		cout<<"-"<<ones[n%10]<<endl;
		return 0;
	}
	cout<<endl;
	return 0;
}
