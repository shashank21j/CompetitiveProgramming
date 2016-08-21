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
	int k;
	int m;
	while(1) {
		ISTREAM>>k;
		if (k == 0) break;
		ISTREAM>>m;
		vector<int> courses(k);
		for (int i = 0; i < k; i++) {
			ISTREAM>>courses[i];
		}
		int c,r;
		int flag = 0;
		for (int i = 0; i < m; i++) {
			ISTREAM>>c>>r;
			int crs;
			int cnt = 0;
			for (int j = 0; j < c; j++) {
				ISTREAM>>crs;
				if (find(courses.begin(),courses.end(),crs)!=courses.end()) cnt++;
			}
			if (cnt<r) {
				flag = 1;
			}
		}
		if (flag == 0) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}