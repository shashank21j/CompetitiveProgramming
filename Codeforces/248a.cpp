#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int l_o= 0, r_o = 0;
	int t1,t2;
	for (int i=0;i<n;i++) {
		cin>>t1>>t2;
		if (t1 == 1) {
			l_o++;
		}
		if (t2 == 1) {
			r_o++;
		}
	}
	cout<<min(l_o,n - l_o) + min(r_o, n- r_o)<<endl;
	return 0;
}