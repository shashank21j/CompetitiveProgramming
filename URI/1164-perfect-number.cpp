#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
bool isPerfect(int n) {
	int sum = 0;
	for (int i=1;i*i<=n;i++) {
		if (n%i == 0) {
			sum += i;
			sum += n/i;
		}
		if (i*i == n) sum -= i;
	}
	if (sum == 2*n) return true;
	return false;
}
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	ISTREAM>>n;
	int temp;
	for (int i = 0; i < n; i++) {
		ISTREAM>>temp;
		if (isPerfect(temp)) cout<<temp<<" eh perfeito"<<endl;
		else cout<<temp<<" nao eh perfeito"<<endl;
	}
	return 0;
}