#include <bits/stdc++.h>

using namespace std;

int main() {
	vector <int> Arr(6);
	for (int i=0;i<6;i++) {
		cin>>Arr[i];
	}
	sort(Arr.begin(),Arr.end());
	for (int i=0;i<3;i++) {
		if (Arr[i] == Arr[i+3]) {
			if (Arr[(i+4)%6] == Arr[(i+5)%6]) {
				cout<<"Elephant\n";
				return 0;
			}
			else {
				cout<<"Bear\n";
				return 0;
			}
		}
	}
	cout<<"Alien\n";
	return 0;
}