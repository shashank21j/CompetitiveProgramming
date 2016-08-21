#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int t1,t2,t3;
	for (int i=0;i<n;i++) {
		cin>>t1>>t2>>t3;
		sum1+=t1;
		sum2+=t2;
		sum3+=t3;
	}
	if (sum1 == 0 && sum2 == 0 && sum3 == 0) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}