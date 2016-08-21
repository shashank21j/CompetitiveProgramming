#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin>>s;
	int i=0;
	int flag =0;
	int n = s.length();
	while(i<n) {
		if (i<n-2 && s[i] == 'W' && s[i+1] == 'U' && s[i+2]=='B') {
			i=i+3;
			if (flag == 1) {
				cout<<" ";
				flag = 0;
			}
			continue;
		}
		cout<<s[i];
		flag = 1;
		i++;
	}
	cout<<endl;
	return 0;
}