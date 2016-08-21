#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector< pair<int,int> > arr(n);
	int neg = 0;
	int pos = 0;
	int neg_sum = 0;
	int pos_sum = 0;
	for (int i = 0; i < n; i++) {
		cin>>arr[i].first>>arr[i].second;
		if (arr[i].first < 0) {
			neg++;
			neg_sum += arr[i].second;
		}
		else if (arr[i].first > 0 ) {
			pos++;
			pos_sum += arr[i].second;
		}
	}
	sort(arr.begin(), arr.end());
	if (neg == pos) {
		cout<<neg_sum + pos_sum<<endl;
	}
	else if (neg < pos) {
		for (int i = neg; i < 2*neg + 1; i++) {
			neg_sum += arr[i].second;
		}
		cout<<neg_sum<<endl;
	}
	else if (neg > pos) {
		for (int i = neg-1; i >= neg -pos -1; i--) {
			pos_sum += arr[i].second;
		}
		cout<<pos_sum<<endl;
	}
	return 0;
}	