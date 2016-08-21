#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	long long int pivot = s.find('^');
	long long int left = 0;
	long long int right = 0;
	for (long long int i = 0; i<pivot;i++) {
		if (s[i] >= 48 && s[i]<= 57) {
			left += (s[i]-48)*(pivot - i);
		}
	}
	for (long long int i = pivot; i<s.length();i++) {
		if (s[i] >= 48 && s[i]<= 57) {
			right += (s[i]-48)*(i - pivot);
		}
	}
	if (left == right) cout<<"balance"<<endl;
	else if (left < right) cout<<"right"<<endl;
	else cout<<"left"<<endl;
	return 0;
}