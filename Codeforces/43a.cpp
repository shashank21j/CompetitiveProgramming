#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	map <string,int> Arr;
	string s;
	for (int i=0;i<n;i++) {
		cin>>s;
		if (Arr.find(s)!= Arr.end()) {
			Arr[s]++;
		}
		else {
			Arr[s] = 1;
		}
	}
	string result;
	int max = -1;
	for (map <string, int> :: iterator it = Arr.begin(); it != Arr.end(); it++) {
		if (it -> second > max) {
			max = it -> second;
			result = it -> first;
		}
	}
	cout<<result<<endl;
	return 0;
}