#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	vector <pair <int,int> > res;
	for (int i=0;i<n;i++) {
		res.clear();
		cin>>s;
		for (int i=0;i<12;i++) {
			if (s[i]=='X') {
				res.push_back(make_pair(1,12));
				break;
			}
		}
		for (int i=0;i<6;i+=1) {
			if (s[i]=='X' && s[i+6]== 'X') {
				res.push_back(make_pair(2,6));
				break;
			}
		}
		for (int i=0;i<4;i+=1) {
			if (s[i]=='X' && s[i+4]== 'X' && s[i+8]=='X') {
				res.push_back(make_pair(3,4));
				break;
			}
		}
		for (int i=0;i<3;i+=1) {
			if (s[i]=='X' && s[i+3]== 'X' && s[i+6]=='X' && s[i+9]=='X') {
				res.push_back(make_pair(4,3));
				break;
			}
		}
		for (int i=0;i<2;i+=1) {
			if (s[i]=='X' && s[i+2]== 'X' && s[i+4]=='X' && s[i+6]=='X' && s[i+8] =='X' && s[i+10]=='X') {
				res.push_back(make_pair(6,2));
				break;
			}
		}
		int flag = 0;
		for (int i=0;i<12;i+=1) {
			if (s[i]!='X' ) {
				flag =1;
				break;
			}
		}
		if (flag == 0) res.push_back(make_pair(12,1));
		cout<<res.size()<<" ";
		for (int i = 0; i<res.size();i++) {
			cout<<res[i].first<<"x"<<res[i].second<<" ";
		}
		cout<<endl;
	}
	return 0;
}