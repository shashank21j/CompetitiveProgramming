#include <bits/stdc++.h>
using namespace std;
int main() {
	float temp;
	for (int i=0;i<100;i++) {
		cin>>temp;
		if (temp<=10) {
			cout<<"A["<<i<<"] = "<<temp<<endl;
		}
	}
	return 0;
}