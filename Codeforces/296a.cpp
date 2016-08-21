#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	set <int> Arr;
	vector <int> Brr(n);
	for (int i=0;i<n;i++) {
		cin>>Brr[i];
		Arr.insert(Brr[i]);
	}
	int size = Arr.size();
	for (set <int> :: iterator it = Arr.begin(); it != Arr.end(); it++) {
		if (count(Brr.begin(), Brr.end(), *it) > n/2  + (int)(n%2 != 0 )) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}