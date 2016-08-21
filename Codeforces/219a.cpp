#include <bits/stdc++.h>

using namespace std;

int main() {
	int k;
	cin>>k;
	string s;
	cin>>s;
	vector <int> h(26,0);
	for (int i=0;i<s.length();i++) {
		h[s[i]-97]++;
	}
	string res = "";
	for (int i=0;i<26;i++) {
		if (h[i] == 0) continue;
		else if (h[i]%k != 0) {
			cout<<"-1"<<endl;
			return 0;
		}
		else {
			for (int j=0;j<h[i]/k;j++) {
				res+=(char)(i+97);
			}
		}
	}
	for (int i=0;i<k;i++) {
		cout<<res;	
	}
	cout<<endl;
	return 0;
}