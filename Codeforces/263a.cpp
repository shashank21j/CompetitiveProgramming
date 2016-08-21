#include <bits/stdc++.h>

using namespace std;
int main() {
	int A[5][5];
	int t;
	for (int i=0;i<5;i++) {
		for (int j=0;j<5;j++) {
			cin>>t;
			if (t == 1) {
				cout<<abs(i-2) + abs(j-2)<<endl;
			}
		}
	}
	return 0;
}