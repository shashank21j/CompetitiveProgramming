#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int temp;
	cin>>temp;
	int max = temp;
	int min = temp;
	int cnt = 0;
	for (int i=1;i<n;i++) {
		cin>>temp;
		if (temp > max) {
			max = temp;
			cnt++;
		}
		else if (temp < min) {
			min = temp;
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}