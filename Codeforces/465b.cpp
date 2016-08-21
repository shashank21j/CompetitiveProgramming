#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> Arr(n);
	vector <int> res;
	for (int i=0;i<n;i++) {
		cin>>Arr[i];
		if (Arr[i] == 1) {
			res.push_back(i);
		}
	}
	if (res.size() == 0) {
		cout<<0<<endl;
		return 0;
	}
	int count = 1;
	for (int i=1;i<res.size(); i++) {	
		if (res[i] == res[i-1] + 1) {
			count++;
		}
		else {
			count+=2;
		}
	}
	cout<<count<<endl;
	return 0;
}