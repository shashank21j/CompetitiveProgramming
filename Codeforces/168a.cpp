#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,y;
	cin>>n>>x>>y;
	if (y*n < x*100) {
		cout<<"0"<<endl;
	}
	else {
		cout<<max(0,(y*n - x*100)/100 + (int)((y*n - x*100)%100 != 0))<<endl;
	}
	return 0;
}