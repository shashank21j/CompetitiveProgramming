#include <bits/stdc++.h>
using namespace std;
int main() {
	string name1;
	string name2;
	while (getline(cin,name1)) {
		getline(cin,name2);
		float s1 = 0;
		int l1 = name1.length();
		for (int i = 0; i < l1; i++) {
			if (name1[i] <= 122 && name1[i]>= 97) {
				s1 += name1[i] - 96;
			}
			else if (name1[i] <= 90 && name1[i]>= 65) {
				s1 += name1[i] - 64;
			}
		}
		while(s1>9){
			int sum = 0;
			while(s1>0) {
				sum+=(int)s1%10;
				s1/=10;
			}
			s1 = sum;
		}
		float s2 = 0;
		int l2 = name2.length();
		for (int i = 0; i < l2; i++) {
			if (name2[i] <= 122 && name2[i]>= 97) {
				s2 += name2[i] - 96;
			}
			else if (name2[i] <= 90 && name2[i]>= 65) {
				s2 += name2[i] - 64;
			}
		}
		while(s2>9){
			int sum = 0;
			while(s2>0) {
				sum+=(int)s2%10;
				s2/=10;
			}
			s2 = sum;
		}
		double mini = min(s1,s2);
		double maxi = max(s1,s2);
		cout<<fixed<<setprecision(2);
		cout<<(mini*100)/maxi<<" %"<<endl;
	}
	return 0;
}