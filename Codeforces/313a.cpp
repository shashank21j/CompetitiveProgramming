#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	cin>>n;
	if (n>=0) {
		cout<<n<<endl;
	}
	else {
		n = (-1)*n;
		int a = n%10;
		int b = (n/10)%10;
		n/=10;
		n -= (n)%10;
		n+=min(a,b);
		if (n>0) cout<<"-"<<n<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}