#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t ; i++) {
		int n;
		cin>>n;
		int mini= 999999999,maxi= 0,temp;
		for (int j=0;j<n;j++) {
			cin>>temp;
			if (temp>maxi) maxi = temp;
			if (temp<mini) mini = temp;
		}
		cout <<(maxi - mini)*2<<endl;
	}
	return 0;
}