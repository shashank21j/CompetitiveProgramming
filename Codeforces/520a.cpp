#include <bits/stdc++.h>
using namespace std;
int main() {
	int arr[26] = {0};
	int n;
	cin>>n;
	string s;
	cin>>s;
	for (int i = 0;i<s.length();i++) {
		if (s[i] >=97) s[i] -= 32;
		arr[s[i] - 65] = 1;
	}
	int flag = 0;
	for (int i=0;i<26;i++) {
		if (arr[i] == 0) {
			cout<<"NO"<<endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0) cout<<"YES"<<endl;
	return 0;
}