#include <bits/stdc++.h>
using namespace std;
int main() {
	int Arr[5][5];
	for (int i=0;i<5;i++) {
		for (int j=0;j<5;j++) {
			Arr[i][j] = 0;
		}
	}
	int temp;
	for (int i=1;i<=3;i++) {
		for (int j=1;j<=3;j++) {
			cin>>temp;
			if (temp%2 == 1) {
				Arr[i][j] ^= 1;
				Arr[i-1][j] ^= 1;
				Arr[i][j-1] ^= 1;
				Arr[i+1][j] ^= 1;
				Arr[i][j+1] ^= 1; 
			}
		}
	}
	for (int i=1;i<=3;i++) {
		for (int j=1;j<=3;j++) {
			cout<<1  - Arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}