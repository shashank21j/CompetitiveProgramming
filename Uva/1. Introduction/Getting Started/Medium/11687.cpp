#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int bin(int n) {
	int cnt = 0;
	while (n!=0) {
		n/=10;
		cnt++;
	}
	return cnt;
}
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	string s;
	while(1) {
		ISTREAM>>s;
		if (s == "END") {
			break;
		}
		if (s == "1") {
			cout<<1<<endl;
			continue;
		}
		vector<int> v;
		v.push_back(s.length());
		int i = 1;
		while (1) {
			v.push_back(bin(v[i-1]));
			if (v[i] == v[i-1]) break;
			i++;
		}
		cout<<i+1<<endl;
	}
 	return 0;
}