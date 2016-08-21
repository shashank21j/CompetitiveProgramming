#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	int small = 0;
	int big = 0;
	for (int i=0;i<s.length();i++) {
		if (s[i]>=97 and s[i]<=122) {
			small++;
		}
		else if (s[i]>=65 and s[i]<=90) {
			big++;
		}
	}
	if (small<big) {
		for (int i=0;i<s.length();i++) {
			if (s[i]>=97 and s[i]<=122) {
				s[i]-=32;
			}
		}	
	}
	else if (small>=big) {
		for (int i=0;i<s.length();i++) {
			if (s[i]>=65 and s[i]<=90) {
				s[i]+=32;
			}
		}	
	}
	cout<<s<<endl;
	return 0;
}