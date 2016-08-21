#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> par;
	vector <int> impar;
	int temp;
	for (int i=0;i<15;i++) {
		cin>>temp;
		if (temp%2 == 0) {
			par.push_back(temp);
		}
		else {
			impar.push_back(temp);
		}
		if (par.size() == 5) {
			for (int i=0;i<5;i++ ) {
				cout<<"par["<<i<<"] = "<<par[i]<<endl;
			}
			par.clear();
		}
		if (impar.size() == 5) {
			for (int i=0;i<5;i++ ) {
				cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
			}
			impar.clear();
		}
	}
	for (int i=0;i<impar.size();i++ ) {
		cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
	}
	for (int i=0;i<par.size();i++ ) {
		cout<<"par["<<i<<"] = "<<par[i]<<endl;
	}
	return 0;
}