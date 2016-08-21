#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int twenty_five = 0;
	int fifty = 0;
	int temp;
	for (int i=0;i<n;i++){
		cin>>temp;
		if (temp == 25) twenty_five++;
		else if (temp == 50) {
			if (twenty_five==0) {
				cout<<"NO"<<endl;
				return 0;
			}
			fifty++;
			twenty_five--;
		}
		else if (temp == 100) {
			if (twenty_five>0 && fifty>0) {
				twenty_five--;
				fifty--;
			}
			else if (twenty_five>2) {
				twenty_five-=3;
			}
			else {
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}