#include <bits/stdc++.h> 

using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	map <string,int> hash;
	for (int i=0;i<n;i++) {
		cin>>s;
		if (hash.count(s) == 0) {
			hash[s] = 1;
			cout<<"OK"<<endl;
		}
		else {
			hash[s]++;
			cout<<s<<hash[s]-1<<endl;
		}
	}
	return 0;
}