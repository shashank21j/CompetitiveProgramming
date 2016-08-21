#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	if (n<=3) {
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	vector <int > Arr;
	for (int i  = 1;i<=n; i++) {
		Arr.push_back(i);
	} 
	int a,b;
	while (Arr.size() != 1) {
		a = Arr[Arr.size() - 1];
		Arr.pop_back();
		b = Arr[Arr.size() - 1];
		Arr.pop_back();
		if (a == 1) { 
			cout<<a<<" * "<<b<<" = "<<a*b<<endl;
			Arr.push_back(a*b);
		}
		else if (a > 5) {
			cout<<a<<" - "<<b<<" = "<<a-b<<endl;
			Arr.push_back(a-b);
		}
		else if (a == 4) {
			cout<<"4 * 3 = 12"<<endl;
			cout<<"12 * 2 = 24"<<endl;
			cout<<"24 * 1 = 24"<<endl;
			return 0;
		}
		else if (a == 5) {
			cout<<a<<" * "<<b<<" = "<<a*b<<endl;
			Arr.push_back(a*b);
			cout<<"20 + 3 = 23"<<endl;
			cout<<"23 + 2 = 25"<<endl;
			cout<<"25 - 1 = 24"<<endl;
			return 0;
		}
	}
	return 0;
}