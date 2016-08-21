#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	int mini = INT_MAX;
	int mini_index = 0;
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		if (Arr[i] <mini) {
			mini = Arr[i];
			mini_index = i+1;
		}
		else if (Arr[i] == mini) {
			mini_index = 0;
		}
	}
	if (mini_index == 0) {
		cout<<"Still Rozdil"<<endl;
	}
	else cout<<mini_index<<endl;
	return 0;
}