#include <bits/stdc++.h>
using namespace std;
int main() {
	while (1) {
		int n;
		cin>>n;
		if (n==0) break;
		string s;
		cin>>s;
		int flag = 0;
		int ind = -1;
		int mini = INT_MAX;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'R') {
				ind = i;
				flag =1;
			}
			else if (s[i] == 'D' && flag == 1) {
				mini = min(mini,i - ind);
				flag = 0;
			}
			else if (s[i] == 'Z') {
				flag = 2;
				break;
			}
		}
		ind = -1;
		flag = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'D') {
				ind = i;
				flag =1;
			}
			else if (s[i] == 'R' && flag == 1) {
				mini = min(mini,i - ind);
				flag = 0;
			}
			else if (s[i] == 'Z') {
				flag = 2;
				break;
			}
		}
		if (flag == 2) cout<<0<<endl;
		else cout<<mini<<endl;
	}
	return 0;
}