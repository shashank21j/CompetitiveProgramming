#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector < pair <int,int> > Arr(n);
	for (int i=0;i<n;i++) {
		cin>>Arr[i].first;
		Arr[i].second = i+1;
	}
	sort(Arr.begin(),Arr.end());
	vector <int> swapper;
	for (int i = 0;i<n-1;i++) {
		if (Arr[i].first == Arr[i+1].first) {
			swapper.push_back(i);
		}
	}
	if ((int)swapper.size()<2) {
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	for (int i=0;i<n;i++) {
		cout<<Arr[i].second<<" ";
	}
	cout<<endl;
	for (int i=0;i<n;) {
		if (i == swapper[0]) {
			cout<<Arr[i+1].second<<" "<<Arr[i].second<<" ";
			i+=2;
		}
		else {
			cout<<Arr[i].second<<" ";
			i+=1;
		}
	}
	cout<<endl;
	for (int i=0;i<n;) {
		if (i == swapper[1]) {
			cout<<Arr[i+1].second<<" "<<Arr[i].second<<" ";
			i+=2;
		}
		else {
			cout<<Arr[i].second<<" ";
			i+=1;
		}
	}
	cout<<endl;
	return 0;
}