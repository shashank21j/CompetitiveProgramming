#include <bits/stdc++.h>
using namespace std;
int main() {
	int x,y;
	cin>>x>>y;
	if (x>y) swap(x,y);
	for (int i = 0;i<y;i++) {
		int t1 = i*5 + 2;
		int t2 = i*5 + 3;
		if (t1>x && t1 <y) {
			cout<<t1<<endl;
		}
		if (t2>x && t2 <y) {
			cout<<t2<<endl;
		}
		if (t2>y) break;
	}
	return 0;
}