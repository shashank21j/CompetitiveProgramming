#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME
bool isPrime(int n) {
	for (int i = 2;i*i<=n;i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}


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
	int temp;
	ISTREAM>>n;
	for (int i=0;i<n;i++) {
		ISTREAM>>temp;
		if (isPrime(temp)) {
			cout<<temp<<" eh primo"<<endl;
		}
		else {
			cout<<temp<<" nao eh primo"<<endl;
		}
	}
	return 0;
}