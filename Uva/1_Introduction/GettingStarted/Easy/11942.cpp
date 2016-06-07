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
	cout<<"Lumberjacks:"<<endl;
	for (int i = 0; i < n; i++) {
		vector<int> Arr(10);
		vector<int> Brr(10);
		for (int j = 0; j < 10; j++) {
			ISTREAM>>Arr[j];
			Brr[j] = Arr[j];
		}
		int flag = 0;
		sort(Arr.begin(), Arr.end());
		for (int j = 0; j < 10; j++) {
			if (Arr[j]!=Brr[j]) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) cout<<"Ordered"<<endl;
		else  {
			sort(Arr.rbegin(), Arr.rend());
			flag = 0;
			for (int j = 0; j < 10; j++) {
				if (Arr[j]!=Brr[j]) {
					flag = 1;
					break;
				}
			}
			if 	(flag == 0) cout<<"Ordered"<<endl;
		}
		if (flag == 1) cout<<"Unordered"<<endl;
	}
	return 0;
}