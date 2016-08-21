#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[4];
	for (int i=0;i<4;i++) {
		cin>>a[i];
	}
	string s;
	cin>>s;
	long long int sum = 0;
	for (int i=0;i<s.length();i++) {
		sum+=a[(int)s[i]-49];
	}
	cout<<sum<<endl;
	return 0;
}