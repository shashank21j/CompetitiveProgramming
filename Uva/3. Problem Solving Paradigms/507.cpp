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
	int t;
	ISTREAM>>t;
	for (int i = 0; i < t; i++) {
		int n;
		ISTREAM>>n;
		vector<int> Arr(n);
		for (int j = 0; j < n-1; j++) {
			ISTREAM>>Arr[j];
		}
		int start = 0;
		int beststart = start;
		int endi = 0;
		int length = 0;
		int bestlength = 0;
		int bestend = endi;
		long long int sum = 0;
		long long int ans = 0;
		for (int j = 0; j < n-1; j++) {
			sum +=Arr[j];
			if (sum <0) {
				start = j+1;
				endi = j+2;
				sum = 0;
				length = 0;
			}
			else { 
				length++;
			}
			if (sum > ans ||(sum >= ans && length > bestlength) ) {
				ans = sum;
				beststart = start;
				endi = j+1;
				bestend = endi;
				bestlength = length;
			}
		}
		if (ans > 0) {
			cout<<"The nicest part of route "<<i+1<<" is between stops "<<beststart+1<<" and "<<bestend+1<<endl;
		}
		else {
			cout<<"Route "<<i+1<<" has no nice parts"<<endl;
		}
		//cout<<start<<" "<<end<<endl;
	}
	return 0;
}