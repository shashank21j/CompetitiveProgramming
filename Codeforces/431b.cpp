#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {1,2,3,4,5};
	long long int mat[5][5];
	for (int i=0;i<5;i++) {
		for (int j=0;j<5;j++) {
			cin>>mat[i][j];
		}
	}
	int maxi = -1;
	long long int happiness;
	do {
		happiness = 0;
		for (int i = 0; i < 5; i++) {
			for (int j = i;j+1<5;j+=2) {
				happiness += mat[arr[j]-1][arr[j+1]-1];
				happiness += mat[arr[j+1]-1][arr[j]-1];
			}
		}
		if (happiness>maxi) {
			maxi = happiness;
		}
	}while(next_permutation(arr,arr+5));
	cout<<maxi<<endl;
	return 0;
}