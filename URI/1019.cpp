#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int h = n/3600;
	int m = (n%3600)/60;
	int s = (n%3600)%60;
	cout<<h<<":"<<m<<":"<<s<<endl;
	return 0;
}