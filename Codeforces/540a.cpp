#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string s1;
	string s2;
	cin>>n>>s1>>s2;
	int cnt = 0;
	for (int i = 0;i<n;i++) {
		int t1 = s1[i] - 48;
		int t2 = s2[i] - 48;
		int t = abs(t1 - t2);
		int u = abs(10-t);
		cnt+=min(t,u);
	}
	cout<<cnt<<endl;
	return 0;
}