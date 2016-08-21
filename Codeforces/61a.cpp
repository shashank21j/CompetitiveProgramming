#include <bits/stdc++.h>

using namespace std;

int main() {
	string s1,s2;
	cin>>s1>>s2;
	for (int i=0;i<s1.length();i++) {
		int c1 = s1[i] - 48;
		int c2 = s2[i] - 48;
		cout<<(c1+c2)%2;
	}
	cout<<endl;
	return 0;
}