#include<bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin >>n;
	int a,b;
	for (int i=0;i<n;i++) {
		cin>>a>>b;
		if (b>a) {
			cout<<"Happy Alex\n";
			return 0;
		}
	}
	cout<<"Poor Alex\n";
	return 0;
}
