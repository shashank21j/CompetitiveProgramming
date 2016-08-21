#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int t = 7 - max(a,b);
	cout<<t/__gcd(t,6)<<"/"<<6/__gcd(t,6)<<endl;
	return 0;
}