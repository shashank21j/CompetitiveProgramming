#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int temp;
	int max = -1;
	int max_i = -1;
	for (int i = 0 ; i <n;i++) {
		cin>>temp;
		temp = temp/m + (int)(temp%m != 0);
		if (temp >= max) {
			max = temp;
			max_i = i+1;
		}
	}
	cout<<max_i<<endl;
	return 0;
}