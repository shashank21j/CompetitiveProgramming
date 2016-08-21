#include<bits/stdc++.h>
using namespace std;

int main() { 
	int n;
	cin>>n;
	vector <int> A(n);
	int maxi = 0;
	int mini = n-1;
	for (int i=0; i<n ;i++) {
		cin>>A[i];
	}
	for (int i=0;i<n;i++) {
		if (A[i]>A[maxi]) maxi = i;
		if (A[i]<=A[mini]) mini = i;
	}
	int res = maxi + (n-1)-mini;
	if (maxi > mini) res -=1;
	cout<<res<<endl;
    return 0;
}

