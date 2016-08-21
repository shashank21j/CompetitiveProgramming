#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d\n",&n);
	vector<char> Arr;
	int len;
	for (int it=0;it<n;it++) {
		string s;
		getline(cin,s);
		len = s.length();
		for (int i=0;i<len;i++) {
			Arr.push_back(s[i]);
		}
		for (int i=0;i<len;i++) {
			if ((Arr[i]<=122 && Arr[i]>=97) || (Arr[i]>=65 && Arr[i]<=90 )) {
				Arr[i] = Arr[i] + 3;
			}
		}
		for (int i=0; i< (len+1)/2; i++) {
			Arr[i] = Arr[i] - 1;
		}
	
		for (int i= len-1;i>=0;i--) {
			cout<<Arr[i];
		}
		cout<<endl;
		Arr.clear();
	}
	return 0;
}