#include <bits/stdc++.h>
using namespace std;
int main() {
	vector <int> Arr(20);
	for (int i=0;i<20;i++) {
		cin>>Arr[i];
	}
	for (int i=0;i<20;i++) {
		cout<<"N["<<i<<"] = "<<Arr[19-i]<<endl;
	}
	return 0;
}