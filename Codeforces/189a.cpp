#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	vector <int> Arr(3);
	cin>>n>>Arr[0]>>Arr[1]>>Arr[2];
	sort(Arr.rbegin(), Arr.rend());
	int max = -1;
	for (int i=0; i<=n;i+= Arr[0]) {
		for (int j = 0;i+j<= n;j+=Arr[1]) {
			if ((n - (i+j))%Arr[2] == 0) {
				if ((n - (i+j) )/Arr[2] + j/Arr[1] + i/Arr[0] >max) max = (n - (i+j) )/Arr[2] + j/Arr[1] + i/Arr[0];
			}
		}
	}
	cout << max<<endl;
	return 0;
}