#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	vector <int > Arr(n);
	int sum = 0;
	int temp;
	for (int i=0;i<n;i++) {
		cin>>temp;
		sum+=temp;
		Arr[i] = sum;
	}
	int q;
	cin>>q;
	for (int i=0;i<q;i++) {
		cin>>temp;
		vector<int>::iterator res;
		res = lower_bound (Arr.begin(), Arr.end(), temp);
		cout<<1+res - Arr.begin()<<endl;
	}
	return 0;
}