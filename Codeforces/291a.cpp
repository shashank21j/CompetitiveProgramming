#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
	}
	sort(Arr.begin(),Arr.end());
	int flag = 0;
	int count = 0;
	int prev;
	for (int i=0;i<n;i++) {
		if (Arr[i] == 0 ) continue;
		if (flag == 0) {
			flag = 1;
			prev = Arr[i];
		}
		else if (flag == 1 && Arr[i] == prev) {
			flag = 2;
			count++;
		}
		else if ( (flag == 1||flag ==2) && Arr[i] != prev) {
			flag = 1;
			prev = Arr[i];
		}
		else if (flag == 2 && Arr[i] == prev) {
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<count<<endl;
	return 0;
}