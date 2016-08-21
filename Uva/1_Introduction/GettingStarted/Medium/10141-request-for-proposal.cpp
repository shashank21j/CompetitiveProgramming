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
	int n,p;
	int cnt = 1;
	ISTREAM>>n>>p;
	while (1) {
		if (n == 0 && p == 0) {
			break;
		}
		cout<<"RFP #"<<cnt<<endl;
		cnt++;
		string s;
		char c;
		scanf("%c",&c);
		for (int i = 0; i < n; i++) {
			getline(ISTREAM,s);
//			cout<<s<<endl;
		}
		double amt;
		int item;
		int max_item = -1;
		double min_amt = INT_MAX;
		string res;
		for (int i = 0;i<p;i++) {
			getline(ISTREAM,s);	
			ISTREAM>>amt>>item;
			if (item>max_item) {
				max_item = item;
				res = s;
				min_amt = amt;
			}
			else if (item == max_item && amt<min_amt) {
				min_amt = amt;
				res = s;
			}
//			cout<<s<<endl;
			scanf("%c",&c);
			for (int j = 0;j < item;j++) {
				getline(ISTREAM,s);	
//				cout<<s<<endl;
			}
		}
		cout<<res<<endl;
		ISTREAM>>n>>p;
		if (n == 0 && p == 0) {
			break;
		}
		else {
			cout<<endl;
		}

	}
	return 0;
}