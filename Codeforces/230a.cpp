#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int s,n;
	cin>>s>>n;
	vector < pair<int,int> > dragon(n);
	for (int i=0;i<n ; i++) {
		cin>>dragon[i].first>>dragon[i].second;
	}
	sort(dragon.begin(),dragon.end());
	bool flag = true;
	for (int i=0;i<n;i++) {
		if (dragon[i].first >= s) {
			cout<<"NO"<<endl;
			flag = false;
			break;
		}
		else {
			s+=dragon[i].second;
		}
	}
	if (flag) {
		cout<<"YES"<<endl;
	}
	return 0;
}