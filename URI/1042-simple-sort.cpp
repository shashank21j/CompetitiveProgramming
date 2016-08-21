#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> a(3);
	vector <int> b(3);
	for (int i = 0;i<3;i++) {
		cin>>a[i];
		b[i] = a[i];
	}
	sort(a.begin(), a.end());
	for (int i=0;i<3;i++) {
		cout<<a[i]<<endl;
	}
	cout<<endl;
	for (int i=0;i<3;i++) {
		cout<<b[i]<<endl;
	}
	return 0;
}