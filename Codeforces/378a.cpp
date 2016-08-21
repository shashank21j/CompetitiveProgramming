#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int t1,t2;
	int fp = 0;
	int sp = 0;
	int dr = 0;
	for (int i=1;i<=6;i++) {
		t1 = abs(i-a);
		t2 = abs(i-b);
		if (t1>t2) {
			sp++;
		}
		else if (t1 == t2) {
			dr++;
		}
		else if (t2>t1) {
			fp++;
		}
	}
	cout<<fp<<" "<<dr<<" "<<sp<<endl;
	return 0;
}