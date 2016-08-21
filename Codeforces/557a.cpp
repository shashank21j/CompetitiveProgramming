#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int> mini(3);
	vector<int> maxi(3);
	for (int i = 0; i < 3; i++) {
		cin>>mini[i]>>maxi[i];
	}
	int a = min(maxi[0],n - (mini[1] + mini[2]));
	int b = min(maxi[1],n - a - mini[2]);
	int c = n - a-b;
	cout<<a<<" "<<b<<" "<<c<<endl;
}