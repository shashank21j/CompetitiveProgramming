#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
string hex(int n) {
	int cnt = 0;
	string res = "";
	while (n!=0) {
		cnt++;
		if (n%16<10) {
			res+=n%16 +48;	
		}
		else if (n%16 == 10) {
			res+='A';
		}
		else if (n%16 == 11) {
			res+='B';
		}
		else if (n%16 == 12) {
			res+='C';
		}
		else if (n%16 == 13) {
			res+='D';
		}
		else if (n%16 == 14) {
			res+='E';
		}
		else if (n%16 == 15) {
			res+='F';
		}
		n/=16;
	}
	if (cnt == 1) res+='0';
	if (cnt == 0) res += "00";
	return res;
}
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	ISTREAM>>n;
	string s;
	for (int i = 0; i < n; i++) {
		ISTREAM>>s;
		cout<<"Case "<<i+1<<": ";
		vector<int> p(100,0);
		int it = 0;
		for (unsigned int j = 0; j < s.length(); j++) {
			if (s[j]=='.') {
			//	cout<<p[it]<<" ";
				continue;
			}
			else if (s[j] == '<') {
				it--;
				if (it<0) it+= 100;
			}
			else if (s[j] == '>') {
				it++;
				it%=100;
			}
			else if (s[j] == '+') {
				p[it]++;
				p[it]%=256;
			}
			else if (s[j] == '-') {
				p[it]--;
				if (p[it]<0) p[it] += 256;
			}
		}
		string s1;
		for (int j = 0;j<99;j++) {
			s1 = hex(p[j]);
			cout<<s1[1]<<s1[0]<<" ";
		}
		s1 = hex(p[99]);
		cout<<s1[1]<<s1[0]<<endl;
	}
	return 0;
}