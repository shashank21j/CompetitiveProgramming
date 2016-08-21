#include <bits/stdc++.h>
using namespace std;
long long int pow1(long long int a,long long int b) {
	if (b<0) return 0;
	if (b==0) return 1;
	long long int n = a;
	for (long long int it = 1;it<b;it++) {
		n*=a;
	}
	return n;
}
int main() {
	long long int n;
	cin>>n;
	long long int m = 0;
	long long int temp;
	for (long long int i = 1; i < 12; i+=1) {
		long long int k = i;
		temp = pow1(10,k) - 1;
		if (n >= temp) m+= k*pow1(10l,k-1)*9;
		else {
			m+=(n - (pow1(10l,k-1)-1))*k;
			break;
		}
		if(n == temp) break;
	}
	cout<<m<<endl;
	return 0;
}