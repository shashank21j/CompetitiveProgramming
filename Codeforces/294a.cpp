#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n+1);
	for (int i=1;i<=n;i++) {
		cin>>Arr[i];
	}
	int q;
	cin>>q;
	for (int i=0;i<q;i++) {
		int a,b;
		cin>>a>>b;
		if (a>1) {
			Arr[a-1] += b-1;
		}
		if (a<n) {
			Arr[a+1] += Arr[a]-b;
		}
		Arr[a] = 0;
	}
	for (int i=1;i<=n;i++) {
		cout<<Arr[i]<<endl;
	}
	return 0;
}