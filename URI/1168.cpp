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
	string s;
	int arr[10] = {6,2,5,5,4,5,6,3,7,6};
	for (int i = 0; i < n; i++) {
		ISTREAM>>s;
		int sum = 0;
		for (int j = 0; j < (int)s.length(); j++) {
			sum += arr[s[j]-48];
		}
		cout<<sum<<" leds"<<endl;
	}
	return 0;
}