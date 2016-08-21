#include <bits/stdc++.h>

using namespace std;
int compare(string a,string b) {
	for (int i = 0; i < min(a.length(),b.length()); ++i) {
		if (a[i]<b[i]) {
			return -1;
		}
		else if (a[i]>b[i]) {
			return 1;
		}
	}
	if (a.length() > b.length() ) {
		return 1;
	}
	else {
		return -1;
	}
}
int main() { 
	int n;
	cin>>n;
	vector < pair <string,string> > names(n);
	vector <string> res;
	string a,b;
	for (int i=0;i<n;i++) {
		cin>>a>>b;
		if (compare(a,b)>0) {
			names[i].first = b;	
			names[i].second = a;
		}
		else {
			names[i].first = a;	
			names[i].second = b;	
		}
	}
	vector <int> qry(n);

	for (int i=0;i<n;i++) {
		cin>>qry[i];
		qry[i]-=1;
	}

	res.push_back(names[qry[0]].first);
//	cout<<res[0]<<endl;
	for (int i=1;i<n;i++) {
		if (compare(names[qry[i]].first,res[i-1])>0) {
			res.push_back(names[qry[i]].first);
		}
		else if (compare(names[qry[i]].second,res[i-1])>0) {
			res.push_back(names[qry[i]].second);	
		}
		else {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}