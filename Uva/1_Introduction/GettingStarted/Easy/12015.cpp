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
	int n;
	ISTREAM>>n;
	for (int i = 0; i < n; i++) {
		cout<<"Case #"<<i+1<<":"<<endl;
		vector<string> res;
		string s;
		int v;
		int max = -1;
		for (int j = 0; j < 10; j++) {
			ISTREAM>>s>>v;
			if (v>max) {
				max = v;
				res.clear();
				res.push_back(s);
			}
			else if (v == max) {
				res.push_back(s);
			}
		}
		for (unsigned int j=0;j<res.size();j++) {
			cout<<res[j]<<endl;
		}
	}
	return 0;
}