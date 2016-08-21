#include <bits/stdc++.h> 

using namespace std;

int main() {
	int n;
	cin>>n;
	string temp;
	cin>>temp;
	vector <string> A;
	A.push_back(temp);
	for (int i=1;i<n;i++) {
		cin>>temp;
		if (temp!=A[A.size()-1]) A.push_back(temp);
	}
	cout<<A.size();
	return 0;
}