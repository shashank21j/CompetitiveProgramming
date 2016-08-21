#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int temp;
	int sum= 0;
	for (int i=0;i<n;i++) {
		cin>>temp;
		sum += temp;
	}
	cout<<(float)sum/(float)n<<endl;
	return 0;
}