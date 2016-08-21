#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int n = s.length();
	int N = pow(2,n);
	while (n>0) {
	    if (s[s.length()-n]=='7') N += pow(2,n-1);
    	n--;
	}
	cout<<N-1<<endl;
	return 0;
}