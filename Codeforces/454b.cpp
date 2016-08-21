#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> A(n);

	int min = INT_MAX;
	int mini = -1;
	int i;
	for (i=0;i<n;i++) {
		cin>>A[i];
	}
	i = 0;
	while (i+1 < n && A[i]<=A[i+1]) i++;
	if (i==n-1) {
		cout<<"0\n";
		return 0;
	}
	int res = i;
	int check = A[0];
	int cnt = 0;
	while (i<n-1) {
		if (A[n-1-cnt]<= check) {
			check = A[n-1-cnt];
			cnt++;
		}
		else {
			cout<<"-1\n";
			return 0;
		}
		i++;
	}
	cout<<cnt<<endl;
	return 0;
}