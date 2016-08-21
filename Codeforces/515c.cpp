#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
long long int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n*fact(n-1);
}
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	cin>>n;
	string s;
	ISTREAM>>s;
	vector <int> prod;
	for (int i = 0; i< s.length();i++) {
		int t = s[i] - 48;
		if (t!= 0 && t!= 1) {
			prod.push_back(t);
		}
	}
	sort(prod.begin(), prod.end());
	int t;
	vector<int> res;
	while (prod.size()>0) {
		t = prod.back();
		prod.pop_back();
		if (t == 9) {
			res.push_back(7);
			res.push_back(3);
			res.push_back(3);
			res.push_back(2);
		}
		else if (t == 8) {
			res.push_back(7);
			res.push_back(2);
			res.push_back(2);
			res.push_back(2);
		}
		else if (t == 6) {
			res.push_back(5);
			res.push_back(3);
		}
		else if (t == 4) {
			res.push_back(2);
			res.push_back(2);
			res.push_back(3);
		}
		else {
			res.push_back(t);
		}
	}
	sort(res.rbegin(), res.rend());
	for (int i = 0; i < res.size(); i++) {
		cout<<res[i];
	}
	cout<<endl;
	return 0;
}