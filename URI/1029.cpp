#include <bits/stdc++.h>
using namespace std;
int cnt;
int fib(int n) {
	cnt++;
	if (n == 0) {
		return 0;
	}
	else if (n == 1) return 1;
	else return fib(n-1) + fib(n-2);
}
int main() {
	int n;
	cin>>n;
	int temp;
	for (int i=0;i<n;i++) {
		cin>>temp;
		cnt = 0;
		int f = fib(temp);
		cout<<"fib("<<temp<<") = "<<cnt-1<<" calls = "<<f<<endl;
	}
	return 0;
}
