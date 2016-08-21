#include <bits/stdc++.h>
using namespace std;
int main() {
	char c;
	cin>>c;
	string s1,s2;
	pair<int,int> temp;
	while (1) {
		if (c == '#') break;
		cin>>s1>>s2;
		s1+=s2;
		int index;
		if (c == 'S') {
			index = 1;
		}
		else if (c == 'W') {
			index = 2;
		}
		else if (c == 'N') {
			index = 3;
		}
		else if (c == 'E') {
			index  = 0;
		}
		vector < pair<int,int> > players[4];
		for(int i = 0; i < 104; i += 2) {
 			if (s1[i] == 'C') {
 				temp.first = 0;
 			}
 			else if (s1[i] == 'D') {
 				temp.first = 1;
 			}
 			else if (s1[i] == 'S') {
 				temp.first = 2;
 			}
 			else if (s1[i] == 'H') {
 				temp.first = 3;
 			}
 			if (s1[i+1] == 'T') {
 				temp.second = 10;
 			}
 			else if (s1[i+1] == 'J') {
 				temp.second = 11;
 			}
 			else if (s1[i+1] == 'Q') {
 				temp.second = 12;
 			}
 			else if (s1[i+1] == 'K') {
 				temp.second = 13;
 			}
 			else if (s1[i+1] == 'A') {
 				temp.second = 14;
 			}
 			else {
 				temp.second = s1[i+1] - 48;
 			}
 			players[index].push_back(temp);
 			index = (index+1)%4;
		}
		for (int i = 0; i < 4; i++) {
			if (i == 0) cout<<"S: ";
			else if (i == 1) cout<<"W: ";
			else if (i == 2) cout<<"N: ";
			else if (i == 3) cout<<"E: ";
			sort(players[i].begin(),players[i].end());
			for (int j = 0; j < players[i].size(); j++) {
				temp = players[i][j];
				if (temp.first == 0) cout<<'C';
				else if (temp.first == 1) cout<<'D';
				else if (temp.first == 2) cout<<'S';
				else if (temp.first == 3) cout<<'H';
				if (temp.second == 10) cout<<'T';
				else if (temp.second == 11) cout<<'J';
				else if (temp.second == 12) cout<<'Q';
				else if (temp.second == 13) cout<<'K';
				else if (temp.second == 14) cout<<'A';
				else cout<<temp.second;
				if (j!=12) cout<<' ';		
			}
			players[i].clear();
			cout<<endl;
		}
		cin>>c;
	}
	return 0;
}

//Room numbers are 22221188 or 22660000. Report this.
