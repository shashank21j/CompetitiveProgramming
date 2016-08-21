#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n,k;
	cin>>n>>k;
	vector< pair<int,int> > vp(n);
	for (int i=0;i<n;i++) {
		cin>>vp[i].first;
		vp[i].second = i+1;
	}
	sort(vp.begin(), vp.end());
	int sum = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		sum += vp[i].first;
		if (sum > k) break;
		v.push_back(vp[i].second);
	}
	cout<<v.size()<<endl;
	for (unsigned int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}