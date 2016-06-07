#include <bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	int n;
	while (1) {
		cin>>n;
		if (n == 0) {
			break;
		}
		vector <int> arr(11,1);
		while(1) {
			cin>>a>>b;
			if (b == "high") {
				for (int i = n;i<=10;i++) {
					arr[i] = 0;
				}
			}
			else if (b == "low") {
				for (int i = 0;i<=n;i++) {
					arr[i] = 0;
				}
			}
			else if (b == "on") {
				if (arr[n] == 0) cout<<"Stan is dishonest"<<endl;
				else cout<<"Stan may be honest"<<endl;
				arr.clear();
				break;
			}
			cin>>n;
		}
	}
	return 0;
}