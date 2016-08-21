#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
	cin>>n>>m;
	for (int i=0;;i++) {
		if (primes[i] == n && primes[i+1]!= m) {
			cout<<"NO"<<endl;
			return 0;
		}
		else if (primes[i] == n && primes[i+1]== m) {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	return 0;
}