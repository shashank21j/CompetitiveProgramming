#include <bits/stdc++.h>
using namespace std;
int main() {
	string home;
	string away;
	cin>>home;
	cin>>away;
	int n;
	cin>>n;
	vector<int> arr(100,0);
	vector<int> brr(100,0);
	int minute;
	char ch;
	int num;
	char col;
	for (int i=0;i<n;i++) {
		cin>>minute>>ch>>num>>col;
		if (ch == 'h') {
			if (arr[num] == -1) continue;
			if (col == 'y') {
				arr[num]+=1;
			}
			else if (col == 'r') {
				arr[num] += 2;
			}
			if (arr[num] >= 2) {
				cout<<home<<" "<<num<<" "<<minute<<endl;
				arr[num] = -1;
			}
		}
		else if (ch == 'a') {
			if (brr[num] == -1) continue;
			if (col == 'y') {
				brr[num]+=1;
			}
			else if (col == 'r') {
				brr[num] += 2;
			}
			if (brr[num] >= 2) {
				cout<<away<<" "<<num<<" "<<minute<<endl;
				brr[num] = -1;
			}	
		}
	}
	return 0;
}