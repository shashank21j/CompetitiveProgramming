#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int k,l;
	cin>>k>>l;
	long long int temp=k;
	int count = 0;
	while (temp< l) {
		temp*=k;
		count++;
	}
	if (temp == l) {
		cout<<"YES"<<endl<<count<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}