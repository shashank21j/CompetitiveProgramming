#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1 = "";
	string s2 = "";
	string s,c;
	cin>>s;
	cin>>c;
	int flag = 0;
	for (int i=0;i<s.length(); i++) {
		if (s[i] == '|') {
			flag =1;
			continue;
		}
		if (flag == 0) {
			s1 += s[i];
		}
		else {
			s2 += s[i];
		}
	}
	int swap = 0;
	string mini,maxi;
	if (s1.length() < s2.length()) {
		mini = s1;
		maxi = s2;
	}
	else {
		swap = 1;
		mini = s2;
		maxi = s1;
	}
	int diff = maxi.length() - mini.length();
	if (c.length() < diff) {
		cout<<"Impossible"<<endl;
		return 0;
	}
	int counter = 0;
	while (mini.length() < maxi.length()) {
		mini += c[counter];
		counter++;
	}
	if ( (c.length() - counter)%2 != 0) { 
		cout<<"Impossible"<<endl;
		return 0;
	}
	while (counter < c.length() ) {
		mini += c[counter++];
		maxi += c[counter++];
	}
	if (swap == 0) {
		cout<<mini<<"|"<<maxi<<endl;
	}
	else {
		cout<<maxi<<"|"<<mini<<endl;	
	}
	return 0;
}