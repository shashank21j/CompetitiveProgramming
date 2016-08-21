#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> A(12);
	for (int i=0;i<12;i++) {
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	int sum = 0;
	int i = 11;
	int cnt = 0;
	while (i>=0 && sum<n) {
		sum += A[i];
		i--;
		cnt++;
	}
	if (sum <n) cout<<"-1"<<endl;
	else cout<<cnt<<endl;
	return 0;
}