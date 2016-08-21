#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin>>n;
	vector <string> mapi(n);
	for (int i=0;i<n;i++) {
		cin>>mapi[i];
	}
	int res[100][100];
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			res[i][j] = 0;
		}
	}

	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (mapi[i][j] == 'o') {
				if (j>0) {
					res[i][j-1]++;
				}
				if (j<n-1) {
					res[i][j+1]++;
				}
				if (i>0) {
					res[i-1][j]++;
				}
				if (i<n-1) {
					res[i+1][j]++;
				}
			}
		}
	}
	int flag = 0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (res[i][j]%2 != 0) {
				flag = 1;
			}
		}
	}
	if (flag == 0) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}