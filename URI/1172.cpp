#include <bits/stdc++.h>
using namespace std;
int main() {
	int temp;
	for (int i=0;i<10;i++) {
		cin>>temp;
		if (temp<=0) temp = 1;
		cout<<"X["<<i<<"] = "<<temp<<endl;
	}
	return 0;
}