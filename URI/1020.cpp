#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ano	= n/365;
	int mo = (n%365)/30;
	int day = (n%365)%30;
	cout<<ano<<" ano(s)"<<endl;
	cout<<mo<<" mes(es)"<<endl;
	cout<<day<<" dia(s)"<<endl;
	return 0;
}