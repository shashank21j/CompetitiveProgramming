#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int ind = -1;
	int maxi = -9999;
	for (int i = 0; i < s.length(); i++) {
		if ( ( (s[i]-48)%2 == 0) &&  (s[s.length() - 1] - 48) - (s[i] - 48) > 0 ){
			ind = i;
			break;
		}
		else if ( ( (s[i]-48)%2 == 0)    ) {
			ind = i;
		}
	}
	if (ind == -1) cout<<ind<<endl;
	else {
		for (int i = 0;i<ind;i++) {
			cout<<s[i];
		}
		cout<<s[s.length()-1];
		for (int i= ind+1;i<s.length()-1;i++) {
			cout<<s[i];
		}
		cout<<s[ind]<<endl;
	}
	return 0;
}