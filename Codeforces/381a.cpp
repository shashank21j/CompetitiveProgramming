#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	int p1 = 0;
	int p2 = Arr.size() - 1;
	int sareja = 0;
	int dima = 0;
	for (int i = 0;i<n;i++ ) {
		if (Arr[p1] > Arr[p2]) {
			if (i%2 == 0) {
				sareja+=Arr[p1++];
			}
			else {
				dima+=Arr[p1++];
			}
		}
		else {
			if (i%2 == 0) {
				sareja+=Arr[p2--];
			}
			else {
				dima+=Arr[p2--];
			}	
		}
	}
	cout<<sareja<<" "<<dima<<endl;
	return 0;
}