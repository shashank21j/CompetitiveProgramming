#include <bits/stdc++.h>

using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int c1 = sqrt((b*c)/a);
	int b1 = b/c1;
	int a1 = a/b1;
	cout<<4*(a1 + b1+ c1)<<endl;
	return 0;
}