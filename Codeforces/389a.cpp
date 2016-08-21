#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	int mini = INT_MAX;
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		if (Arr[i]<mini) mini = Arr[i];
	}
	int flag = 0;
	while(flag == 0) {
		flag = 1;
		for (int i=0;i<n;i++) {
			if (Arr[i]> mini) {
				Arr[i]%= mini;
				if (Arr[i] == 0) Arr[i] += mini;
				if (Arr[i]<mini) mini = Arr[i];
				flag = 0;
			}
		}
	}
	cout <<mini*n<<endl;
	return 0;
}