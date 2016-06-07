#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif

int memo[220][25];
int items[25][25];
int money,counts;

int dp(int mon, int cnts) {
	if (mon < 0) {
		return -999999;
	}

	if (cnts == counts) {
		return money - mon;
	}
	if (memo[mon][cnts]!=-1) return memo[mon][cnts];
	int ans = -1;
	for (int i = 1; i <= items[cnts][0]; i++) {
		ans = max(ans,dp(mon - items[cnts][i],cnts+1));
	}
	memo[mon][cnts] = ans;
	return ans;
}


int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	ISTREAM>>n;
	for (int i = 0; i < n; i++) {
		ISTREAM>>money>>counts;
		for (int j= 0;j<counts;j++) {
			ISTREAM>>items[j][0];
			for (int k = 1; k<= items[j][0]; k++) {
				ISTREAM>>items[j][k];
			}
		}
		memset(memo,-1,sizeof(memo));
		int ans = dp(money,0);
		if (ans <= 0) {
			cout<<"no solution"<<endl;
		}
		else {
			cout<<ans<<endl;
		}
	}
	return 0;
}