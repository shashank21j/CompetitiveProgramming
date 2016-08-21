#include <bits/stdc++.h> 
using namespace std;
int main() {
	int n;
	cin>>n;
	cout<<(n/2)*3 + (int)(n%2 != 0)<<endl;
	return 0;
}