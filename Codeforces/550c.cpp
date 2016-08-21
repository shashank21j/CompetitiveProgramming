#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int t;
	for (int i = 0; i < s.length(); i++) {
		t = s[i] - 48;
		if (t%8 == 0) {
			cout<<"YES"<<endl;
			cout<<t<<endl;
			return 0;
		}
	}
	for (int i = 0; i < s.length()-1; i++) {
		t = s[i] - 48;
		for (int j = i+1; j < s.length(); j++) {		
			int temp = t*10 + s[j]- 48;
			if (temp%8 == 0) {
				cout<<"YES"<<endl;
				cout<<temp<<endl;
				return 0;
			}
		}
	}
	for (int i = 0; i < (int)(s.length() - 2); i++) {
		t = s[i] - 48;
		for (int j = i+1; j < s.length()-1; j++) {		
			int temp = t*10 + s[j]- 48;
			for (int k = j+1;k<s.length();k++) {
				int temp2 = temp*10 + s[k] - 48;
				if (temp2%8 == 0) {
					cout<<"YES"<<endl;
					cout<<temp2<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}