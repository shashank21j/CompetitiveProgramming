#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a,b;
	int lasta,lastb;
	cin>>lasta>>lastb;
	int cnt = 1;
	int maxcnt = 1;
	for (int i=1;i<n;i++) {
		cin>>a>>b;
		if (a==lasta && b == lastb) {
			cnt++;
		}
		else {
			cnt= 1;
		}
		if (cnt>maxcnt) maxcnt = cnt;
		lasta = a;
		lastb = b;
	}
	cout<<maxcnt<<endl;
	return 0;
}