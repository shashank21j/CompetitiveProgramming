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
	int white = 0;
	int black = 0;
	for (int i = 0;i<8;i++) {
		cin>>s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'p') black+=1;
			else if (s[j] == 'P') white+=1;
			else if (s[j] == 'n') black+=3;
			else if (s[j] == 'N') white+=3;
			else if (s[j] == 'b') black+=3;
			else if (s[j] == 'B') white+=3;
			else if (s[j] == 'r') black+=5;
			else if (s[j] == 'R') white+=5;
			else if (s[j] == 'q') black+=9;
			else if (s[j] == 'Q') white+=9;
		}
	}
	if (black > white) cout<<"Black"<<endl;
	else if (black == white) cout<<"Draw"<<endl;
	else cout<<"White"<<endl;
	return 0;
}