#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin >> Arr[i];
	}
	sort(Arr.begin(),Arr.end());
	int count = 1;
	int max_count = -1;
	int global_count = 0;
	int prev = Arr[0];
	for (int i=1;i<=n;i++) {
		if (i<n && Arr[i] == Arr[i-1]) {
			count++;
		}
		else {
			if (count>max_count) {
				max_count = count;
			}
			count = 1;
			global_count++;
		}
	}
	cout<<max_count<<" "<<global_count<<endl;
	return 0;
}