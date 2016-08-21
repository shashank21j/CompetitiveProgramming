#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	if (n == 1) {
		cout<<1<<endl<<1<<endl;
	}
	else if (n == 2) {
		cout<<1<<endl<<1<<endl;
	}
	else if (n == 3) {
		cout<<2<<endl<<"1 3"<<endl;
	}
	else if (n == 4) {
		cout<<4<<endl<<"2 4 1 3"<<endl;
	}
	else {
		cout<<n<<endl;
		int counter = 1;
		for (int i=0;i<n;i+=2) {
			arr[i]=counter++;
		}
		for (int i = 1;i<n;i+=2) {
			arr[i]=counter++;
		}
		for (auto i :arr) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}