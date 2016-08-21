#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		int a,b,c,d;
		char op,sl;
		int t1,t2;
		cin>>a>>sl>>b>>op>>c>>sl>>d;
		if (op == '*') {
			t1 = a*c;
			t2 = b*d;
		}
		else if (op == '/') {
			t1 = a*d;
			t2 = b*c;
		}
		else if (op == '+') {
			t1 = a*d + b*c;
			t2 = b*d;
		}
		else if (op == '-') {
			t1 = a*d - b*c;
			t2 = b*d;
		}
		cout<<t1<<"/"<<t2<<" = "<<t1/__gcd(abs(t1),t2)<<"/"<<t2/__gcd(abs(t1),t2)<<endl;
	}
	return 0;
}