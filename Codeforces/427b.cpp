#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,t,c;
	cin>>n>>t>>c;
	vector <int> A(n);
	for (int i=0;i<n;i++) {
		cin>>A[i];
	}
	int troll = 0;
	for (int i=0;i<c;i++) {
		if (A[i] > t ) troll++;
	}
	int cnt= 0;
	for (int i=0;i+c<n;i++) {
		if (troll == 0 ) cnt++;
		if (A[i] > t) {
			troll--;
		}
		if (A[i+c] > t) troll++;
	}
	if (troll == 0 )cnt++;
	cout<<cnt<<endl;
}