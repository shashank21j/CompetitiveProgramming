#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	double pa,pb;
	double ga,gb;
	for (int i=0;i<n;i++) {
		cin>>pa>>pb;
		cin>>ga>>gb;
		int t=0;
		while(pa<=pb) {
			t++;
			pa += pa*(ga/100);
			pa = floor(pa);
			pb += pb*(gb/100);
			pb = floor(pb);
			if (t == 102) {
				break;
			}
		}
		/*
		long long int t = (log(pa) - log(pb))/(log(1 + gb/100) - log(1 + ga/100));
		t = (long long int)(t) +1;
		*/
		if (t>100) {
			cout<<"Mais de 1 seculo."<<endl;
		}
		else {
			cout<<t<<" anos."<<endl;
		}
	}
	return 0;
}