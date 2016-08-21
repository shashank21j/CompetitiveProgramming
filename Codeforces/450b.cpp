#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b;
	int t[6];
	t[0] = b-a;
	t[1] = t[0] - b;
	t[2] = t[1] - t[0];
	t[3] = -t[0];
	t[4] = -t[1];
	t[5] = -t[2];
	cin>>c;
	int res;
	if (c == 1) {
		res=a;
	}
	else if (c == 2) {
		res = b;
	}
	else {
		res = t[(c-3)%6];
	}
	while (res<1000000007) res+= 1000000007;
	cout<<res%1000000007<<endl;
	return 0;
}