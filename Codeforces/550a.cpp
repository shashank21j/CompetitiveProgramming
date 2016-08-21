#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	vector <int> ab;
	vector <int> ba;
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == 'A' && s[i+1] == 'B') ab.push_back(i);
		else if (s[i] == 'B' && s[i+1] == 'A') ba.push_back(i);
	}
	for (int i = 0;i< ab.size();i++) {
		for (int j = 0; j < ba.size(); j++)	{
			if (ba[j] > ab[i] + 1 || ba[j] + 1 < ab[i]) {
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
}