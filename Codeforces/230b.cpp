#include <bits/stdc++.h>
using namespace std;

long long int psq(long long int n) {
	long long int t = sqrtl(n);
	if (t*t == n ) {
		return t;
	}
	else if ((t+1)*(t+1)==n){
		return t+1;
	}
	else if  ((t-1)*(t-1) == n)  {
		return t-1;
	}
	return 0;
}

int main() {
	int n;
	cin>>n;
	int a[1000006] = {0};
	a[0] = 1;a[1] = 1;
	for (long long int i=2;i<1000002;i++) {
		if (a[i]== 1) continue;
		for (long long int j = i*i;j < 1000002; j+=i) {
			a[j] = 1;
		}
	}
	long long int temp;
	for (int i=0;i<n;i++) {
		cin>>temp;
		if (psq(temp) && a[psq(temp)] == 0) {
			cout<<"YES"<<endl;
		} 
		else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}