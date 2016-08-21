#include <bits/stdc++.h>

using namespace std;
int main() {
	int n,s;
	cin>>n>>s;
	int max = -1;
	for (int i=0;i<n;i++) {
		int a,b;
		cin>>a>>b;
		if (s>a and b > 0 ) {
			if (100 - b>max) max = 100-b;
		}
		else if (s >= a && b == 0) {
			if (0>max) max = 0;
		}
	}
	cout<<max<<endl;
	return 0;
}