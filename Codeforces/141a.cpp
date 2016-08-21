#include <bits/stdc++.h> 

using namespace std;

int main() {
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	string s3;
	cin>>s3;
	vector <int> check(26,0);
	for (int i=0;i<s1.length();i++) {
		int t = s1[i] - 65;
		check[t]++;
	}
	for (int i=0;i<s2.length();i++) {
		int t = s2[i] - 65;
		check[t]++;
	}
	for (int i=0;i<s3.length();i++) {
		int t = s3[i] - 65;
		check[t]--;
	}
	for (int i=0;i<26;i++) {
		if (check[i] != 0) {
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}