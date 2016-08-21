#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	getchar();
	for (int i = 0; i < n; i++) {
		getline(cin,s);
		int male = 0;
		int female = 0;
		int l = s.length();
		for (int i = 0; i < l; i++) {
			if (s[i] == 'M') male++;
			else if (s[i] == 'F') female++;
		}
		if (male == female && (male + female) > 2 )cout<<"LOOP"<<endl;
		else cout<<"NO LOOP"<<endl;
	}
	return 0;
}