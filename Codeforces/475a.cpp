#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int Arr[11][4] = {0};
	for (int i = 0;i<11;i++) {
		for (int j = 0;j<4;j++) {
			if (n == 0) {
				break;
			}
			if (i > 0 && j == 2) {
				continue;
			} 
			Arr[i][j] = 1;
			n--;
		}
	}
	cout<<"+------------------------+"<<endl;
	cout<<"|";
	for (int i=0;i<11;i++) {
		if (Arr[i][0] == 1) {
			cout<<"O.";
		}
		else {
			cout<<"#.";
		}
	}
	cout<<"|D|)"<<endl;
	cout<<"|";
	for (int i=0;i<11;i++) {
		if (Arr[i][1] == 1) {
			cout<<"O.";
		}
		else {
			cout<<"#.";
		}
	}
	cout<<"|.|"<<endl;
	if (Arr[0][2] == 1) cout<<"|O.......................|"<<endl;
	else cout<<"|#.......................|"<<endl;
	cout<<"|";
	for (int i=0;i<11;i++) {
		if (Arr[i][3] == 1) {
			cout<<"O.";
		}
		else {
			cout<<"#.";
		}
	}
	cout<<"|.|)"<<endl;
	cout<<"+------------------------+"<<endl;
	return 0;
}