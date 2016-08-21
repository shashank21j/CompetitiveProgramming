#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(1) {
		cin>>n;
		if (n==-1) {
			break;
		}
		int count = 0;
		cout<<"Round "<<n<<endl;
		string s1,s2;
		cin>>s1>>s2;
		int arr[26] = {0};
		int uniq = 0;
		for (int i = 0;i<s1.length();i++) {
			if (arr[s1[i]-97] == 0) {
				uniq++;
			}
			arr[s1[i]-97] +=1;
		}
		for (int i = 0;i<s2.length();i++) {
			if (arr[s2[i]-97] == 0) {
				count++;
				arr[s2[i]-97] = -1;
			}
			else if (arr[s2[i]-97] != -2 && arr[s2[i]-97]!=-1){
				arr[s2[i]-97] = -2;
				uniq--;
			}
			if (uniq == 0) break;
		}
		if (uniq == 0 && count<7) cout<<"You win."<<endl;
		else if (count>= 7) cout<<"You lose."<<endl;
		else if (uniq!=0) cout<<"You chickened out."<<endl;
	}
	return 0;
}
