#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int temp;
	vector <int> negs;
	vector <int> pos;
	long long int zero=0;
	for (int i=0;i<n;i++) {
		cin>>temp;
		if (temp<0) negs.push_back((-1)*temp);
		else if (temp>0) pos.push_back(temp);
		else zero++;
	}
	sort(pos.begin(),pos.end());
	sort(negs.begin(),negs.end());
	long long int counter = 0;
	for (int i=1;i<=10;i++) {
		long long int a = count(pos.begin(),pos.end(),i);
		long long int b = count(negs.begin(),negs.end(),i);
		counter+= a*b;
	}
	counter += (zero*(zero-1))/2;
	cout<<counter<<endl;
	return 0;
}