#include <bits/stdc++.h>

using namespace std;

int main() {
	int r,c;
	cin>>r>>c;
	vector <int> affected_r(r,0);
	vector <int> affected_c(c,0);
	for (int i=0;i<r;i++) {
		string s;
		cin>>s;
		for (int j=0;j<c;j++)  {
			if (s[j] == 'S') {
				affected_c[j] = 1;
				affected_r[i] = 1;
			}
		}
	}
	int count_r = 0;
	int count_c = 0;
	for (int i=0;i<r;i++) {
		if (affected_r[i]==0) {
			count_r++;
		}
	}
	for (int i=0;i<c;i++) {
		if (affected_c[i]==0) {
			count_c++;
		}
	}
	cout<<count_r*c + count_c*(r-count_r)<<endl;
	return 0;
}