#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >>n;
	string s;
	for (int i=0;i<n;i++) {
		cin>>s;
		int flag = 0;
		for (int j=0;j<s.length();j++) {
			if (flag == 0 && s[j] == 'R') flag=1;
			else if (flag == 1 && s[j]<= '9' && s[j]>='0') flag=2;
			else if (flag == 2 && s[j]== 'C') {
				flag=3;
				break;
			}
		}
		if (flag == 3) {
			int j=1;
			int t = 0;

			while (s[j]<= '9' && s[j]>='0') {
				t = t*10 + s[j] - 48;
				j++;
			}
			if (s[j] == 'C') {
				j++;
			}
			int t1 = 0;
			while (s[j]<= '9' && s[j]>='0') {
				t1 = t1*10 + s[j] - 48;
				j++;
			}
			string column = "";
			while(t1>0) {
				t1-=1;
				int temp = t1%26;
				column+=(char)(temp+65);
				t1 = t1/26;
			}
			for (int j=column.length() - 1 ; j >= 0 ;j--) {
				cout<<column[j];
			}
			cout<<t<<endl;
		}
		else {
			string column = "";
			int j = 0;
			int col = 0;
			while (s[j] >= 65 && s[j]<=90) {
				column+= s[j];
				col = col*26 + s[j] - 64;
				j++;
			}
			int t = 0;
			while (s[j]<= '9' && s[j]>='0') {
				t = t*10 + s[j] - 48;
				j++;
			}
			cout<<"R"<<t<<"C"<<col<<endl;
		}
	}
	return 0;
}