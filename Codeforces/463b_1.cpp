#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin>>n;
	int max = -1;
	for (int i=0;i<n;i++) {
		int temp;
		cin>>temp;
		if (temp>max) max = temp;
	}
	cout<<max<<endl;
	return 0;
}