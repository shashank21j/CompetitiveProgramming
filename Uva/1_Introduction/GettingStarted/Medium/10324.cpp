#include <bits/stdc++.h>
using namespace std;
int main() {
	char s[1000000];
	int n;
	int counter = 0;
	while(scanf("%s",s)!=EOF) {
		counter++;
		cin>>n;
		int a,b;
		int len = strlen(s);
		if (len == 0) break;
		vector<int> aux(len);
		aux[0] = s[0] - 48;
		for (int i = 1;i<len;i++) {
			aux[i] = aux[i-1] + s[i] - 48;
		}
		cout<<"Case "<<counter<<":"<<endl;
		for (int i = 0; i < n; i++) {
			int sum = 0;
			cin>>a>>b;
			if (a>b) swap(a,b);
			if (a == 0) {
				sum = aux[b];
			}
			else {
				sum = aux[b] - aux[a-1];
			}
			if (sum == 0 || sum == b-a+1) {
				cout<<"Yes"<<endl;
			}
			else {
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}