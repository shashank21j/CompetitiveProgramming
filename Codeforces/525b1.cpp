#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<int> arr(n);
	vector<int> aux(n,0);
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	int id = 0;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < s.length()/2; i++) {
		while (id < n && arr[id]<=i+1) id++;
		if(id%2==1) swap(s[i], s[s.size() - i - 1]);
	}
	cout<<s<<endl;
	return 0;
}