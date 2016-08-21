#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	sort(Arr.begin(),Arr.end());
	for (int k = 1;k<=100;k++) {
		int flag = 0;
		for (int j=0;j<n;j++) {
			if (Arr[j] < j/k) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			cout<<k<<endl;
			return 0;
		}
	}
	return 0;
}