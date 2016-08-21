#include <bits/stdc++.h>
using namespace std;
long long int C(int n, int r) {
	long long int res = 1;
	for (int i=n;i>r;i--) {
		res*=i;
	}
	for (int i = 1;i<=n-r;i++) {
		res/=i;
	}
	return res;
}

int main() {
	string s1;
	string s2;
	cout << fixed << setprecision(9);
	cin>>s1;
	cin>>s2;
	int pos1=0;
	for (int i=0;i<s1.length();i++) {
		if (s1[i] == '+') pos1++;
		else pos1--;
	}
	int pos2 = 0;
	int d = 0;
	for (int i=0;i<s2.length();i++) {
		if (s2[i] == '+') pos2++;
		else if (s2[i] == '-') pos2--;
		else d++;
	}
	int more = abs(pos1 - pos2);
	if (d-more<0 || (d - more )%2==1) {
		cout<<0.000000000<<endl;
		return 0;
	}
	int n = (d - more)/2 + more;
	cout<<C(d,n)/powl(2,d)<<endl;
	return 0;
}