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
	long long int temp;
	ISTREAM>>temp;
	while(temp!=0) {
		if (abs(temp)%2 == 1) temp++;
		long long int sum = 0;
		for (long long int i = temp;i<= temp+8;i+=2) {
			sum += i;
		}
		cout<<sum<<endl;
		ISTREAM>>temp;
	}
	return 0;
}