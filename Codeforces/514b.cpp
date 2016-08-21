#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x0,y0;
	cin>>n>>x0>>y0;
	set < pair<int,int> > slopes;
	int x,y;
	int num,den;
	for (int i = 0;i<n;i++) {
		cin>>x>>y;
		num = y - y0;
		den = x - x0;
		int temp;
		if (num == 0 && den == 0) {
			continue;
		}
		else {
			temp = __gcd(num,den);
		}
		num /= temp;
		den /= temp;
		slopes.insert(make_pair(num,den));
	}
	cout<<slopes.size()<<endl;
	return 0;
}