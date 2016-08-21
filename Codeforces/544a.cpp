#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	string s;
	cin>>k;
	cin>>s;
	vector <string> res;
	int i = 0;
	int cnt = 0;
	vector <int> hs(26);
	while (i<s.length()) {
		string t = "";
		t+=s[i];
		hs[s[i]-97] = 1;
		i++;
		while(i<s.length() && hs[s[i]-97]==1) {
			t+=s[i];
			i++;
		}
		res.push_back(t);
		cnt++;
	}
	if (cnt < k) {
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	for (int i = 0;i<k-1;i++) {
		cout<<res[i]<<endl;
	}
	for (int i = k-1;i<res.size();i++) {
		cout<<res[i];
	}
	cout<<endl;
	return 0;
}