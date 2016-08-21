#include <bits/stdc++.h>
using namespace std;
int main() {
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	a = max(3*a/10,a - a*c/250);
	b = max(3*b/10,b - b*d/250);
	if (a>b) cout<<"Misha"<<endl;
	else if (a<b) cout<<"Vasya"<<endl;
	else cout<<"Tie"<<endl;
	return 0;
}