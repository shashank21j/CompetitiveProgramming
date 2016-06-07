#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	int temp;
	while(1) {
		cin>>n>>m;
		vector <int> brr(m);
		vector <int> arr(n+1,0);
		if (n == 0 && m == 0) break;
		for (int i = 0;i < m;i++) {
			cin>>brr[i];
		}

		for (int i = 0;i<m;i++) {
			for (int j = 0;j<m;j++) {
				arr[abs(brr[i] - brr[j])]++;;
			}
		}
		bool flag = true;
		for (int i = 0;i< n+1;i++) {
			if (arr[i]== 0) flag = false;
		}
		if (flag) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
		arr.clear();
		brr.clear();
	}
	return 0;
}