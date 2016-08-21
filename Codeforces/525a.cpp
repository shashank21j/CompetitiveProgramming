#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector <int> keys(26,0);
	int counter = 0;
	for (int i = 0;i<2*(n-1);i+=2) {
		keys[s[i]-97]++;
		if (keys[s[i+1]-65]>0) keys[s[i+1]-65]--;
		else counter++;
	}
	cout<<counter<<endl;
	return 0;
}