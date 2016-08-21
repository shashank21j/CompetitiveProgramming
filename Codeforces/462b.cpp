#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n,k;
	cin>>n>>k;
	string word;
	cin>>word;
	vector <int> hsh(26,0);
	for (int i=0;i<word.length();i++) {
		hsh[word[i] - 65]++;
	}
	vector <long long int> t;
	for (int i=0;i<26;i++) {
		if (hsh[i]>0) {
			t.push_back(hsh[i]);
		}
	}
	sort(t.begin(),t.end(),greater<int>());
	long long int count = 0;
	int c = 0;
	while ( k>0) {
		if (t[c] < k ) {
			count += t[c]*t[c];
		}
		else {
			count += k*k;
			break;
		}
		k-=t[c];
		c++;
	}
	cout<<count<<endl;
	return 0;
}