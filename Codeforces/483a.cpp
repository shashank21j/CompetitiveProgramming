#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int l,r;
	cin>>l>>r;
	//Stage 1
	long long int temp = l + (int)(l%2!=0);
	if (temp+2 <= r) {
		cout<<temp<<" "<<temp+1<<" "<<temp+2<<endl;
	}
	else {
		cout<<-1<<endl;
	}
	return 0;
}