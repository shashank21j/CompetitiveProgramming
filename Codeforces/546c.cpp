#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,p1,p2,ele;
	deque <int> player1;
	deque <int> player2;
	cin>>n;
	cin>>p1;
	for (int i = 0; i < p1; i++) {
		cin>>ele;
		player1.push_front(ele);
	}
	cin>>p2;
	for (int i = 0; i < p2; i++) {
		cin>>ele;
		player2.push_front(ele);
	}
	int cnt = 0;
	while (!player1.empty() && !player2.empty()) {
		cnt++;
		int e1 = player1.back();
		int e2 = player2.back();
		player1.pop_back();
		player2.pop_back();
		if (e1 > e2) {
			player1.push_front(e2);
			player1.push_front(e1);
		}
		else if (e2 > e1) {
			player2.push_front(e1);
			player2.push_front(e2);
		}
		if (cnt>1000) break;
	}
	if (cnt>1000) {
		cout<<-1<<endl;
		return 0;
	}
	cout<<cnt<<" ";
	if (player1.empty()) cout<<2<<endl;
	else cout<<1<<endl;
	return 0;
}