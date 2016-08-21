#include <bits/stdc++.h> 

using namespace std;
int main() {
	string s1;
	string s2;
	cin>>s1>>s2;
	if (s1.length() != s2.length()) {
		cout<<"NO\n"; 
		return 0;
	}
	for (int i=0;i<s1.length()-1;i+=2) {
		int t1 = (s1[i] - 48)^(s1[i+1] - 48);
		int t2 = (s1[i] - 48)|(s1[i+1] - 48);
		int t3 = s2[i] - 48;
		//cout<<t1<<" "<< t2 <<" "<< t3 <<" "<< t4 <<endl;
		if ( t1 == t3 || max(t1,t2) != max(t3,t4) ) {
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}