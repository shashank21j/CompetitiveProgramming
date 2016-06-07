#include <bits/stdc++.h>

using namespace std;

int main() { 
	int n;
	scanf("%d",&n);
	while (n != 0) {
		int o1, o2;
		cin>>o1>>o2;
		int c1,c2;
		for (int i = 0 ; i < n ; i++) {
			cin>>c1>>c2;
			c1-=o1;
			c2-=o2;
			if (c1 == 0 || c2 ==0) {
				cout<<"divisa"<<endl;
			}
			else if (c1>0 && c2>0) {
				cout<<"NE"<<endl;
			}
			else if (c1<0 && c2>0) {
				cout<<"NO"<<endl;
			}
			else if (c1<0 && c2<0) {
				cout<<"SO"<<endl;
			}
			else if (c1>0 && c2<0) {
				cout<<"SE"<<endl;
			}
		}
		scanf("%d",&n);
	}
	return 0;
}