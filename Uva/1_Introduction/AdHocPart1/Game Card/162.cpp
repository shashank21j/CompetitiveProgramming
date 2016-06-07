#include "bits/stdc++.h"
using namespace std;
int main () {
	string card;
	deque<string> p[2];
	deque<string> table;
	while (1) {
		p[0].clear();
		p[1].clear();
		table.clear();
		cin>>card;
		if (card[0] == '#') break;
		p[0].push_back(card);
		for (int i = 0;i <51;i++) {
			cin>>card;
			if (i%2==0) p[1].push_back(card);
			else p[0].push_back(card);
		}
		int counter = 1;
		int chance = 0;
		int table_flag = 0;
		int count = 0;
		while (1) {
			if (chance == 0 && p[0].empty()) {
				cout<<"1";
				if (p[1].size()<10) cout<<"  ";
				else if (p[1].size()<100) cout<<" ";
				cout<<p[1].size()<<endl;
				break;
			}
			else if (chance ==1 && p[1].empty()) {
				cout<<"2";
				if(p[0].size()<10) cout<<"  ";
				else if (p[0].size()<100) cout<<" ";
				cout<<p[0].size()<<endl;
				break;
			}
			counter--;
			string a = p[chance].back();
			p[chance].pop_back();
			table.push_front(a);
//			cout<<a<<endl;
			if (a[1] == 'A') {
				table_flag = 1;
				chance^=1;
				counter = 4;
			}
			else if (a[1] == 'K') {
				chance^=1;
				counter = 3;
				table_flag = 1;
			}
			else if (a[1] == 'Q') {
				chance^=1;
				counter = 2;
				table_flag = 1;
			}
			else if (a[1] == 'J') {
				chance^=1;
				counter = 1;
				table_flag = 1;
			}
			if (counter == 0) {
				chance^=1;
				counter = 1;
				if (table_flag == 1) {
					table_flag = 0;
					while(!table.empty()) {
						p[chance].push_front(table.back());
						table.pop_back();
					}
				}
			}
		}
	}
	return 0;
}