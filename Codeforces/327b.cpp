#include <bits/stdc++.h> 

using namespace std;

int arr[1400007] = {0};

int main() {
	vector <int> primes;
	for (int i=2;i<1400000;i++) {
		if (arr[i]==1) continue;
		primes.push_back(i);
		for (int j = 2*i;j < 1400000;j+=i) {
			arr[j] = 1;
		}
	}
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		cout<<primes[i]<<" ";
	}
	cout<<endl;
	return 0;
}