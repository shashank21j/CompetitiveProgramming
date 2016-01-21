#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,s; 
	cin>>t;
	int a,b,c,d;
	while(t--) {
		cin>>n;
		cin>>s;
		while (n--) {
			cin>>a>>b>>c>>d;
			if (c > s || d > s) cout<<"no move"<<endl;
			else if (a ==c && b == d) cout<<"0"<<endl;
			else if ((a + b)%2 != (c+d)%2) cout<<"no move"<<endl;
			else if (abs(c-a) == abs(d-b)) cout<<"1"<<endl;
			else cout<<"2"<<endl;
		}
	}
	return 0;
}