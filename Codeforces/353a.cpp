#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a,b;
	int sum_up = 0,sum_down = 0;
	int flag = 0;
	for (int i=0;i<n;i++) {
		cin>>a>>b;
		sum_up += a;
		sum_down +=b;
		if ((a+b)%2 == 1) flag = 1;
	}
	if (sum_up%2 == 1 && sum_down%2 == 1 && flag == 1) {
		cout<<1<<endl;
		return 0;
	}
	else if (sum_down%2 == 0 && sum_up%2 == 0) {
		cout<<0<<endl;
	}
	else {
		cout<<-1<<endl;
	}
	return 0;
}