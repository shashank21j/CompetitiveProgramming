#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n,m;
	cin>>n>>m;
	int max = 0;
	int ind = 0;
	for (int i = 0;i<=n;i++) {
		if (n- 2*i >= 0 && 2*n - i*4 >= 0 && 2*n - i*3 <= m && n-i>max) {
			max = n-i;
			ind = i;
		}
	}
	n = n + m;
	m = n - m;
	n = n - m;
	for (int i = 0;i<=n;i++) {
		if (n- 2*i >= 0 && 2*n - i*4 >= 0 && 2*n - i*3 <= m && n-i>max) {
			max = n-i;
			ind = i;
		}
	}
	cout<<max<<endl;
	return 0;
}