#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	for (int i = 0; i < n; ++i) {
		cin>>Arr[i];
	}
	int count = 0;
	int flag = 0;
	for (int i=0;i<n;i++) {
		if (Arr[i] == i) {
			count++;
		}
		else if (i == Arr[Arr[i]]) {
			flag = 1;
		}
	}
	if (flag == 1) cout<<count+2<<endl;
	else cout<<min(count+1,n)<<endl;
	return 0;
}