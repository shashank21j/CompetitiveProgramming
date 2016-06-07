#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	string s[16] = {"Happy", "birthday", "to", "you","Happy", "birthday","to","you","Happy", "birthday","to","Rujia","Happy","birthday","to","you"};
	int n;
	ISTREAM>>n;
	vector<string> names(n);
	for (int i = 0; i < n; i++) {
		ISTREAM>>names[i];
	}
	int cnt = 0;
	int j = 0;
	while (j<n) {
		cout<<names[j]<<": "<<s[cnt]<<endl;
		cnt++;
		j++;
		cnt%=16;
	}
	j = 0;
	while (cnt < 16) {
		cout<<names[j]<<": "<<s[cnt]<<endl;
		cnt++;
		j++;
		j%=n;
	}
	return 0;
}