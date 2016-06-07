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
	ISTREAM>>n;
	vector<int> Arr(3);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt++;
		ISTREAM>>Arr[0]>>Arr[1]>>Arr[2];
		sort(Arr.begin(), Arr.end());
		cout<<"Case "<<cnt<<": "<<Arr[1]<<endl;
	}
	return 0;
}