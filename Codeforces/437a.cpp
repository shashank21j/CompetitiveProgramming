#include <bits/stdc++.h>
using namespace std;
int main() {
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int ar[4];
	ar[0] = a.length() - 2;
	ar[1] = b.length() - 2;
	ar[2] = c.length() - 2;
	ar[3] = d.length() - 2;
	char sol;
	int f1 = 0,f2 = 0;
	for (int i = 0;i<4;i++) {
		if (2*ar[i]<=ar[(i+1)%4] && 2*ar[i]<=ar[(i+2)%4] && 2*ar[i]<=ar[(i+3)%4]) {
			sol = (char)(65 + i);
			f1 = 1;
		}
	}
	for (int i = 0;i<4;i++) {
		if (ar[i]>=2*ar[(i+1)%4] && ar[i]>=2*ar[(i+2)%4] && ar[i]>=2*ar[(i+3)%4]) {
			sol = (char)(65 + i);
			f2 = 1;
		}
	}
	if (f1^f2) {
		cout<<sol<<endl;
	}
	else {
		cout<<"C"<<endl;
	}
	return 0;
}