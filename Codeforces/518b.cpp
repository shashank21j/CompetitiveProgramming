#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	string t;
	cin>>s>>t;
	vector<int> sA(26,0);
	vector<int> sa(26,0);
	vector<int> tA(26,0);
	vector<int> ta(26,0);
	for (int i = 0; i < s.length(); i++) {
		int tmp = (int)s[i];
		if (tmp<91) {
			sA[tmp - 65]++;
		}
		else {
			sa[tmp - 97]++;
		}
	}
	for (int i = 0; i < t.length(); i++) {
		int tmp = (int)t[i];
		if (tmp<91) {
			tA[tmp - 65]++;
		}
		else {
			ta[tmp - 97]++;
		}
	}
	int yay = 0;
	int whoops = 0;
	for (int i = 0; i < 26; i++) {
		if (sa[i] <= ta[i]) {
			yay+=sa[i];
			ta[i] -= sa[i];
			sa[i] = 0;
		}
		else {
			yay+=ta[i];
			sa[i] -= ta[i];
			ta[i] = 0;
		}
		if (sA[i] <= tA[i]) {
			yay+=sA[i];
			tA[i] -= sA[i];
			sA[i] = 0;
		}
		else {
			yay+=tA[i];
			sA[i] -= tA[i];
			tA[i] = 0;
		}
		whoops += min(tA[i],sa[i]);
		whoops += min(ta[i],sA[i]);
	}
	cout<<yay<<" "<<whoops<<endl;
	return 0;
}