#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> A(n);
	int sum = 0;
	for(int i=0;i<n;i++) {
		cin>>A[i];
		sum += A[i];
	}
	while(true) {
		for (int i = 0;i<n-1;i++) {
			if (A[i]>0) {
				A[i]--;
				sum--;
				cout<<"P";
			}
			cout<<"R";
		}
		if (sum == 0) break;
		for (int i = n-1;i>0;i--) {
			if (A[i]>0) {
				A[i]--;
				sum--;
				cout<<"P";
			}
			cout<<"L";
		}
		if (sum ==0) break;
	}
	cout<<endl;
	return 0;
}