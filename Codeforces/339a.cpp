#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin>>s;
	vector <int> res;
	for (int i=0;i<s.length();i++) {
		if (s[i] == '1' || s[i]=='2' || s[i] == '3') res.push_back(s[i]-48);
	}
	sort(res.begin(),res.end());
	cout<<res[0];
	for (int i=1;i<res.size();i++) {
		cout<<"+"<<res[i];
	}
	cout<<endl;
	return 0;
}