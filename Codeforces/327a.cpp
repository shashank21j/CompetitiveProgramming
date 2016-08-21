#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	int maxi = -1;
	int temp;
	for (int i=0;i<n;i++) {
		for (int j = i;j<n;j++) {
			int count = 0;
			for (int k=0;k<n;k++) {
				if (k>= i && k<= j) temp = 1- Arr[k];
				else temp = Arr[k];
				if (temp == 1) count++;
			}
			if (count>maxi) maxi = count;
		}
	}
	cout<<maxi<<endl;
	return 0;
}