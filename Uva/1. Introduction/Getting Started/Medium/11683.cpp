#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,c;
	while (1) {
		cin>>a;
		if (a == 0) break;
		cin>>c;
		vector<int> arr(c);
		vector <int> helper;
		int count = 0;
		for (int i = 0; i < c; i++) {
			cin>>arr[i];
		}
		count = a - arr[0];
		for (int i = 1; i < c; i++) {
			if (arr[i]>=arr[i-1]) continue;
			count+=arr[i-1] - arr[i];
		}
		cout<<count<<endl;
	}
	return 0;
}