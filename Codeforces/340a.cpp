#include <bits/stdc++.h>

using namespace std;

int lcm (int a,int b) {
	a = a/__gcd(a,b);
	return a*b;
}
int main() {
	int x,y,a,b;
	cin>>x>>y>>a>>b;
	int l = lcm(x,y);
	int t = (l*(b/l) - l*((a/l) + (int)(a%l != 0)))/l;
	cout<<max(0,t+1)<<endl;
	return 0;
}