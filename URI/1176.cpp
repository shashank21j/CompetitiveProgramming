#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <unsigned long long int> Fib(61);
	Fib[0] = 0;Fib[1] = 1;
	for (int i=2;i<61;i++) {
		Fib[i] = Fib[i-1] + Fib[i-2];
	}
	int n;
	cin>>n;
	long long int temp;
	for (int i=0;i<n;i++) {
		cin>>temp;
		cout<<"Fib("<<temp<<") = "<<Fib[temp]<<endl;
	}
	return 0;
}