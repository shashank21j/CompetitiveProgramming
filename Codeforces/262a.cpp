#include <bits/stdc++.h> 
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int temp;
	int lucky;
	int count = 0;
	for (int i=0;i<n;i++) {
		cin>>temp;
		lucky =0;
		while (temp!=0) {
			int x = temp%10;
			if (x == 4 || x == 7) lucky++;
			temp/=10;
		}
		if (lucky<=k) count++;
	}
	cout<<count<<endl;
	return 0;
}