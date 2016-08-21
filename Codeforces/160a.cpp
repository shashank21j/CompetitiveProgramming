#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	int sum = 0;
	vector <int> A(n);
	for (int i=0;i<n;i++) {
		cin>>A[i];
		sum += A[i];
	}
	sort(A.begin(),A.end());
	int cnt = 0;
	int s1 = 0;
	for (int i=A.size()-1;i>=0;i--) {
		s1+= A[i];
		cnt++;
		if (s1>sum/2) break;
	}
	cout<<cnt<<endl;
	return 0;
}