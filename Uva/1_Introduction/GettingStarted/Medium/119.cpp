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
	int m;
	int c;
	int cnt = 0;
	while (ISTREAM>>n) {
		if (cnt != 0) cout<<endl;
		cnt++;
		vector < pair <string, int> > record(n);
		string s;
		for (int i = 0; i < n; i++) {
			ISTREAM>>record[i].first;
			record[i].second = 0;
		}
		for (int i = 0; i < n; i++) {
			ISTREAM>>s>>m>>c;
			for (int j = 0; j < n; j++) {
				if (record[j].first == s && c>0) {
					record[j].second -= (m - m%c);
				}
			}
			for (int j = 0; j < c; j++) {
				ISTREAM>>s;
				for (int k = 0; k < n; k++) {
					if (record[k].first == s) {
						record[k].second += m/c;
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			cout<<record[i].first<<" "<<record[i].second<<endl;
		}
		record.clear();
	}
	return 0;
}