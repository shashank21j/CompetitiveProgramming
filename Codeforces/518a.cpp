#include <bits/stdc++.h>
using namespace std;
int main() {
	string s,t;
	cin>>s;
	cin>>t;
	int i = s.length()-1;
	while (s[i] == 'z') i--;
	s[i]+=1;
	i+=1;
	while (i <= s.length() - 1) {
		s[i] = 'a';
		i++;
	}
	i = s.length()-1;
	while (s[i] == t[i] && i>=0) {
		i--;
	}
	if (i == -1) {
		cout<<"No such string"<<endl;
	}
	else cout<<s<<endl;
	return 0;
}