#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	long long int n = s.length();
	vector <long long int> pos;
	for (long long int i=0;i<=n-4;i++) {
		if (s[i] == 'b' && s[i+1]== 'e' && s[i+2] == 'a' && s[i+3]=='r') {
			pos.push_back(i);
		}
	}
	long long int prev = 0;
	long long int sum = 0;
	for (int i=0;i<pos.size();i++) {
		sum += (pos[i]-prev+1)*(n - (pos[i]+3));
		prev = pos[i]+1;
	}
	cout<<sum<<endl;
	return 0;
}