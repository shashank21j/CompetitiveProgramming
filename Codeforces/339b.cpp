#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int check; 
	cin>>check;
	int prev = check;
	long long int res = check - 1;
	for (int i=0 ; i<m-1; i++) {
		cin>>check;
		if ( check >= prev ) {
			res += check - prev;
		} 
		else {
			res += n - prev;
			res += check;
		}
		prev = check;
	}
	cout<<res<<endl;
	return 0;
}