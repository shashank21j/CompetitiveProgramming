#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,p;
	cin>>a;
	while (a) {
		cin>>b>>p;
		int x = (a*b*100)/p;
		cout<<(int)sqrt(x)<<endl;
		cin>>a;
	}
	return 0;
}