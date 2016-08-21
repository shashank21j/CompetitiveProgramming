#include <bits/stdc++.h>
using namespace std;

int main() {
	int p,n;
	cin>>p>>n;
	vector <int> p_num(p,0);
	int temp;
	for (int i=0;i<n;i++) {
		cin>>temp;
		p_num[temp%p]+=1;
		if (p_num[temp%p] == 2) {
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}