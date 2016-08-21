#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	vector<int> arr(26,0);
	for (int i = 0; i < s.length(); i++) {
		arr[s[i]-'a']++;
	}
	int bad = 0;
	for (int i = 0;i<26;i++) {
		if (arr[i]%2 == 1) bad++;
	}
	if ( bad == 0 || bad%2 == 1) cout<<"First"<<endl;
	else cout<<"Second"<<endl;
	return 0;
}