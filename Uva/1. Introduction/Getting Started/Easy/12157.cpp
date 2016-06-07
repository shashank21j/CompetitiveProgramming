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
	int t;
	int temp;
	for (int i = 0; i < n; i++) {
		cout<<"Case "<<i+1<<": ";
		ISTREAM>>t;
		int mile = 0;
		int juice = 0;
		for (int j = 0; j < t; j++) {
			ISTREAM>>temp;
			mile += (temp+1)/30 + (int)((temp+1)%30 != 0);
			juice += (temp + 1)/60 + (int)((temp+1)%60 != 0);
		}
		mile*=10;
		juice*= 15;
		if (mile <= juice) {
			cout <<"Mile"<<" ";
		}
		if (juice <= mile) {
			cout<<"Juice"<<" ";
		}
		cout<<min(mile,juice)<<endl;
	}
	return 0;
}