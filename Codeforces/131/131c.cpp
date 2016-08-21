#include <bits/stdc++.h>
typedef unsigned long long int LL;
using namespace std;

LL C(LL n,LL r) {
	if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    LL ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main() {
	LL n,m,t;
	cin>>n>>m>>t;
	LL sum = 0;
	for (int i=4;i<=n;i++) {
		if (t-i<1) break;
		if (t-i>m) continue;
		sum += C(n,i)*C(m,t-i);
	}
	cout<<sum<<endl;
	return 0;
}