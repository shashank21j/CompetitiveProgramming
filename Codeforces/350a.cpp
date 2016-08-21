#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int mini=999999999,maxi=-1;
	int temp;
	for (int i=0;i<n;i++) {
		cin>>temp;
		if (temp<mini) mini = temp;
		if (temp>maxi) maxi = temp;
	}
	int maxi2 = 2*mini;
	for (int i=0 ;i<m;i++) {
		cin>>temp;
		if (temp<=max(maxi,maxi2)) {
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<max(maxi,maxi2)<<endl;
	return 0;
}