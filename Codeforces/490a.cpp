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
	vector<int> v(n);
	vector<int> one;
	vector<int> two;
	vector<int> three;
	for (int i=0;i<n;i++) {
		cin>>v[i];
		if (v[i] == 1) {
			one.push_back(i+1);
		}
		else if (v[i] == 2) {
			two.push_back(i+1);
		}
		else if (v[i]== 3) {
			three.push_back(i+1);
		}
	}
	int cnt = min (one.size(),min(two.size(),three.size()));
	cout<<cnt<<endl;
	for (int i=0;i<cnt;i++) {
		cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
	}
	return 0;
}