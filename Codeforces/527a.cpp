#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int a,b;
	cin>>a>>b;
	long long int counter = 0;
	while (a != 0 ) {
		if (a<b) swap(a,b);
		counter += a/b;
		a = a%b;
	}
	cout<<counter<<endl;
	return 0;
}