#include <bits/stdc++.h>

using namespace std;

int main() {
	int k;
	string s;
	cin>>s>>k;
	vector <int> A(26);
	int max = -1;
	for(int i=0;i<26;i++) {
		cin>>A[i];
		if (A[i]>max) max = A[i];
	}
	int res = 0;
	int last;
	for (int i=0;i<s.length();i++) {
		int check = s[i] - 97;
		res+=(i+1)*A[check];
		last = i;
	}
	for (int i=0;i<k;i++) {
		res+= (last+1)*max;
		last++;
	}
	cout<<res+ k*max<<endl;
	return 0;
}