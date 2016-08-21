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
	int m,n;
	while (1) {
		ISTREAM>>m>>n;
		if (m == 0 && n == 0) {
			break;
		}
		else if (m == 0 || n==0) {
			cout<<0;
		}
		else if (m>=3 && n>=3) {
			cout<<(n*m)/2 + (m*n)%2;
		}
		else if (m == 1 || n == 1) {
			cout<<max(m,n);
		}
		else if (m==2 && n == 2) {
			cout<<"4";
		}
		else if (m == 2 || n == 2) {
			int t = max(m,n);
			if (t%2== 0 && (t/2)%2 == 1) cout<<max(m,n) + 2;
			else cout<<max(m,n) + max(m,n)%2;
		}
		cout<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
	}
 	return 0;
}
