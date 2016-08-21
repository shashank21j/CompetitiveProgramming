#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int ab = (a + b + abs(a-b))/2;
	int bc = (b + c + abs(b - c))/2;
	int ac = (ab + bc + abs(ab - bc))/2;
	cout<<ac<<" eh o maior"<<endl;
	return 0;
}