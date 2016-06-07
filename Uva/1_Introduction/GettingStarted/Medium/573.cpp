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
	int h,d;
	double u,f;
	while (1) {
		ISTREAM>>h>>u>>d>>f;
		if (h == 0) break;
		f = (double)u*f/100;
		double pos = 0;
		int day = 0;
		while (pos <= h && pos >=0) {
			day++;
			pos += u;
			if (pos >h) break;
			pos -= d;
			u -= f;
			u = max(0.0,u);
		}
		if (pos>h) {
			cout<<"success on day "<<day<<endl;
		}
		else if (pos<0) {
			cout<<"failure on day "<<day<<endl;
		}
	}
	return 0;
}