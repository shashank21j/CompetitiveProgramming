#include <bits/stdc++.h>
using namespace std;
int main() {
	double Arr[12][12];
	char flag;
	cin>>flag;
	double sum = 0;
	cout<<fixed<<setprecision(1);
	for (int i=0;i<12;i++) {
		for (int j=0;j<12;j++) {
			cin>>Arr[i][j];
		}
	}
	for (int i= 0; i<5; i++) {
		for (int j = i+1; j< 11 - i; j++  ){
			sum += Arr[i][j];
		}
	}
	if (flag == 'S') cout<<sum<<endl;
	else cout<<sum/30<<endl;
	return 0;
}