#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	vector<int> brr(n-1);
	vector<int> crr(n-2);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	for (int i = 0; i < n-1; i++) {
		cin>>brr[i];
	}
	for (int i = 0; i < n-2; i++) {
		cin>>crr[i];
	}
	sort(arr.begin(), arr.end());
	sort(brr.begin(), brr.end());
	sort(crr.begin(), crr.end());
	int flag = 0;
	for (int i = 0; i < n-1; i++) {
		if (arr[i]!=brr[i]) {
			cout<<arr[i]<<endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0) cout<<arr[n-1]<<endl;
	flag = 0;
	for (int i = 0; i < n-2; i++) {
		if (brr[i]!=crr[i]) {
			cout<<brr[i]<<endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0) cout<<brr[n-2]<<endl;
	return 0;
}