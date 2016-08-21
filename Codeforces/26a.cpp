#include <bits/stdc++.h>
using namespace std;
int main() {
	int count = 0;
	int n;
	cin>>n;
	for (int i=2;i<=n; i++ ) {
		int t = i;
		int c = 0;
		for (int j = 2; j <= i/2;j++) {
			if (t%j==0) {
				c++;
				while (t%j == 0) t/=j;
			}
		}
		if (c == 2) count++;
	}
	cout<<count<<endl;
 	return 0;
}