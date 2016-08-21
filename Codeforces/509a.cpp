#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	cin>>n;
	int arr[10][10];
	for (int i = 0 ;i<n;i++) {
		for (int j = 0;j<n;j++) {
			if (i == 0 || j == 0 ) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i-1][j] + arr[i][j-1];	
			}
		}
	}
	cout<<arr[n-1][n-1]<<endl;
	return 0;
}