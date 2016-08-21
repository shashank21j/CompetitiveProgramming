#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector <int> Check(n+1,0);
	int a,b;
	cin>>a;
	for (int i=0;i<a;i++) {
		int temp;
		cin>>temp;
		Check[temp] = 1;
	}
	cin>>b;
	for (int i=0;i<b;i++) {
		int temp;
		cin>>temp;
		Check[temp] = 1;
	}
	int flag = 1;
	for (int i=1;i<n+1;i++) {
		if (Check[i] == 0) {
			flag = 0;
			cout<<"Oh, my keyboard!\n";
			break;
		}
	}
	if (flag == 1) {
		cout<<"I become the guy.\n";
	}
	return 0;
}