#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int aux[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			aux[i][j] = 0;
		}
	}
	int n = s.length();
	for (int i = 0; i < n; i++) {
		int t = s[i]-48;
		for (int j = 0; j < t; j++) {
			aux[j][i] = 1;
		}
	}
	vector<int> res;
	for (int i = 0; i < 9; i++) {
		int t = 0;
		for (int j = 0; j < n; j++) {
			t = t*10 + aux[i][j];
		}
		if (t>0) res.push_back(t);
	}
	cout<<res.size()<<endl;
	for (auto i:res) cout<<i<<" ";
	cout<<endl;
	return 0;
}