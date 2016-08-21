#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int maxi = -1;
	vector <long long int> Arr(n);
	for (int i = 0; i < n; ++i)	{
		cin>>Arr[i];
		if (Arr[i]>maxi) maxi = Arr[i];
	}
	vector <long long int> c(maxi+2,0);
	for (int i=0;i<n;i++) {
		c[Arr[i]] +=Arr[i];
	}

	vector <long long int> dp(maxi+2);
	dp[0] = 0;
	dp[1] = c[0];
	for (int i=2;i<maxi+2;i++) {
		dp[i] = max(dp[i-1],dp[i-2] + c[i-1]);
	}
	cout<<dp[maxi+1]<<endl;
	return 0;
}