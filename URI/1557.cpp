#include <bits/stdc++.h>
using namespace std;
int digicnt (int n) {
	int cnt = 0;
	while (n!= 0) {
		n/=10;
		cnt++;
	}
	return cnt;
}
int main() {
	int n;
	int two[] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912};
	cin>>n;
	while (n!= 0) {
		int max = digicnt(two[2*(n-1)]);
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				int temp = i+j;
				int spc = max - digicnt(two[temp]);
				for (int k=0;k<spc;k++) {
					cout<<" ";
				}
				cout<<two[temp];
				if (j<n-1) cout<<" ";
			}
			cout<<endl;
		}
		printf("\n");
		cin>>n;
	}
	return 0;
}

