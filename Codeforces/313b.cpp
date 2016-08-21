#include <bits/stdc++.h>
using namespace std;
int main () {
	string s;
	cin>>s;
	vector <int> Arr(s.length(),0);
	for (int i=1;i<s.length();i++) {
		Arr[i] = (int)(s[i] == s[i-1]) + Arr[i-1];
	}
	int q;
	cin>>q;
	int a,b;
	for (int i=0;i<q;i++) {
		cin>>a>>b;
		a--;b--;
		cout<<Arr[b] - Arr[a]<<endl;
	}
	return 0;
}