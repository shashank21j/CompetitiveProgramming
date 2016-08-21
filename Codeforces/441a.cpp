#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,v;
	cin>>n>>v;
	vector <int> res;
	for (int i=0;i<n;i++) {
		int k;
		int flag = 0;
		cin>>k;
		for (int j=0;j<k;j++) {
			int temp;
			cin>>temp;
			if (flag==0 && v>temp) {
				res.push_back(i);
				flag = 1;
			}
		}
	}
	cout<<res.size()<<endl;
	for (int i = 0;i<res.size();i++) {
		cout<<res[i]+1<<" ";
	}
	cout<<endl;
	return 0;
}