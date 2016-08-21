#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	for (int i=0;i<n;i++) {
		if (s[i]!='4' && s[i]!='7') {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	int sum1 = 0;
	int sum2 = 0;
	for (int i=0;i<n/2;i++) {
		sum1+= (s[i] - 48);
	}
	for (int i=n/2;i<n;i++) {
		sum2+= (s[i] - 48);
	}
	if (sum1!=sum2) {
		cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;
	}
	return 0;
}