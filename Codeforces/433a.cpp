#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	int hundred = 0;
	int twohundred = 0;
	int sum = 0;
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		if (Arr[i] == 100) hundred++;
		else if (Arr[i] == 200) twohundred++;
	}
	if (twohundred%2 == 0 && hundred%2== 0 ) cout<<"YES"<<endl;
	else if (twohundred%2 == 1 && hundred%2 == 0 && hundred>=2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}