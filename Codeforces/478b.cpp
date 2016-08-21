#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n,m;
	cin>>n>>m;
	long long int t = n-(m-1);
	long long int maxi = (t*(t-1))/2;

	if (n%m == 0) {
		t = n/m;
		cout<<m* ((t*(t-1))/2)<<" "<<maxi<<endl;
	}
	else {
		t = n/m;
		long long int temp = (m-(n%m))*((t*(t-1))/2);
		t += 1;
		temp += (n%m)*((t*(t-1))/2);
		cout<<temp<<" "<<maxi<<endl;	
	}
	/*
	if (ones >= 0) {
		cout<<twos<<" "<<maxi<<endl;
	}
	else if (ones <0) {
		twos = m-1;
		t = n - m + 1;	
		cout<<twos + (t*(t-1))/2<<" "<<maxi<<endl;
	}*/	
	return 0;
}
