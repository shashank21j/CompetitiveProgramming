#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int i=0;
	int count = 0;
	for (;i<s.length();) {
		char t = s[i];
		int t2 = 0;
		while (s[i] == t && t2<5) {
			i++;
			t2++;
		}
		count++;
	}
	cout<<count<<endl;
	return 0;
}