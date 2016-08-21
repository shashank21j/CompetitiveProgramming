#include <bits/stdc++.h>
using namespace std;
int main() {
	float temp;
	int pos = 0;
	float sum = 0;
	for (int i=0;i<6;i++) {
		cin>>temp;
		if (temp>0) {
			pos++;
			sum += temp;
		}
	}
	cout<<fixed<<setprecision(1);
	cout<<pos<<" valores positivos"<<endl;
	cout<<sum/pos<<endl;
	return 0;
}