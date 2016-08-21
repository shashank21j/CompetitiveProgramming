#include <bits/stdc++.h>
using namespace std;
int main() {
	float temp;
	int pos = 0;
	for (int i=0;i<6;i++) {
		cin>>temp;
		if (temp>0) pos++;
	}
	cout<<pos<<" valores positivos"<<endl;
	return 0;
}