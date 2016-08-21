#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k,t;
	int ele;
	cin>>n>>k;
	vector< vector<int> > arr;
	int cnt = 0;
	int links = 0;
	for (int i = 0;i<k;i++) {
		cin>>t;
		vector<int> temp(t);
		for (int j = 0;j<t;j++) {
			cin>>temp[j];
		}
		vector <int> t1;
		t1.push_back(temp[0]);
		for (int j=1;j<t;j++) {
			if (temp[j]!=temp[j-1]+1) {arr.push_back(t1);cnt++;t1.clear();t1.push_back(temp[j]);}
			else t1.push_back(temp[j]);
		}
		arr.push_back(t1);
	}
	for (int i = 0;i<arr.size();i++) {
		if (arr[i][0] == 1) cnt+=1;
		else cnt+=2*(arr[i].size()-1) + 1;
	}
	cout<<cnt-1<<endl;
	return 0;
}