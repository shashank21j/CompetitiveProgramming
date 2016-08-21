#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int > arr(n);
	vector<int > brr(n);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	int a = arr[0];
	for (int i = 0;i<n;i++) {
		if (i%2==0) brr[i] = (arr[i]-a +n)%n;
		else brr[i] = (arr[i] + a)%n;
	}
	int flag = 0;
	for (int i = 0;i<n;i++) {
		if (brr[i]!=i) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout<<"Yes"<<endl;
		return 0;
	}
	a = n - arr[0];
	for (int i = 0;i<n;i++) {
		if (i%2==0) brr[i] = (arr[i]+a)%n;
		else brr[i] = (arr[i] +n - a)%n;
	}
	flag = 0;
	for (int i = 0;i<n;i++) {
		if (brr[i]!=i) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout<<"Yes"<<endl;
		return 0;
	}
	cout<<"No"<<endl;
	return 0;
}