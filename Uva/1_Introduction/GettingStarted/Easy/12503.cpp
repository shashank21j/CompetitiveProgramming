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
	string s;
	char s1;
	int n;
	int t;
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		scanf("%d",&t);
		scanf("%c",&s1);
		int pos = 0;
		vector<int> cmd;
		for (int j = 0; j < t; j++) {
			getline(cin,s);
			if (s == "LEFT") {
				pos -= 1;
				cmd.push_back(-1);
			}
			else if (s == "RIGHT") {
				pos +=1;
				cmd.push_back(1);
			}
			else {
				int ind = 0;
				for (unsigned int k = 8;k<s.length();k++) {
					ind *= 10;
					ind += s[k] - 48;
				}
				pos += cmd[ind - 1];
				cmd.push_back(cmd[ind-1]);
			}
		}
		cout<<pos<<endl;
	}
	return 0;
}