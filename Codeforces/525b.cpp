#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int l = s.length();
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	vector<int> arr;
	arr.push_back(v[0]);
	int cnt = 0;
	for (int i = 1; i < n; i++) {
		if (v[i] == arr[cnt] || arr[cnt] == 0) {
			arr[cnt]^=v[i];
		}
		else {
			arr.push_back(v[i]);
			cnt++;
		}
	}
	vector<int> brr;
	for (int i = arr.size()-1; i > -1; i--) {
		if (arr[i] == 0) continue;
		brr.push_back(l-arr[i]+1);
	}
	int ix = 0;
	int flip = 0;
	for (int i = 0; i < l/2; i++) {
		if (arr[ix] != 0 && ix < arr.size() && i == arr[ix]-1) {
			flip^=1;
			ix++;
		}
		if (flip == 0) cout<<s[i];
		else cout<<s[l-i-1];
		if (arr[ix] == 0) ix++;
	}
	ix = 0;
	for (int i = l/2; i < l; i++) {
		if (ix < brr.size() && i == brr[ix]) {
			flip^=1;
			ix++;
		}
		if (flip == 0) cout<<s[i];
		else cout<<s[l-i-1];	
	}
	cout<<endl;
	return 0;
}