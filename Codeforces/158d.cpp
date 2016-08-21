#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	vector <int> factors;
	for (int i=1;i*i<=n;i++) {
		if (n%i == 0) {
			factors.push_back(i);
			if (i<n/i) factors.push_back(n/i);
		}
	}
	sort(factors.begin(),factors.end());
	/*
	cout<<"factors are:"<<endl;
	
	for (int i=0;i<(int)factors.size();i++) {
		cout<<factors[i]<<endl;
	}
	*/
	int maxi = -2147483646;
	for (int i=0;i<factors.size();i++) {
		if (n/factors[i] <3) {
			continue;
		}
	//	cout<<"trying: "<<factors[i]<<endl;
		for (int j = 0; j<factors[i];j++) {
	//		cout<<"from index: "<<j<<endl;
			int sum = 0;
			for (int k=j; k<n;k+=factors[i]) {
				sum += Arr[k];
			}
	//		cout<<"sum is:"<<sum<<endl;
			if (sum>= maxi) maxi = sum;
		}
	}
	cout<<maxi<<endl;
	return 0;
}