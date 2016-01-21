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
	int months;
	double downpayment;
	double loan;
	int t;
	while (1) {
		vector<double> arr(100,0);
		
		ISTREAM>>months>>downpayment>>loan>>t;
		if (months < 0) {
			break;
		}
		double value = loan;
		int temp;
		double r;
		int it = 0;
		for (int i=0;i<t;i++) {
			ISTREAM>>temp>>r;
			for (int j = it+1;j<temp;j++) {
				arr[j] = arr[j-1];
			}
			arr[temp] = r;
			it = temp;
		}
		for (int j = temp+1;j<100;j++) {
				arr[j] = arr[j-1];	
		}
		int cnt = 1;
		double instalment = loan/months;
		value = (value+downpayment)*(1 - arr[0]);
		while (value<=loan) {
			value = value*(1 - arr[cnt]);
			cnt++;
			loan -= instalment;
		}
		cnt--;
		if (cnt == 1) cout<<cnt<<" month"<<endl;
		else cout<<cnt<<" months"<<endl;
	}
	return 0;
}