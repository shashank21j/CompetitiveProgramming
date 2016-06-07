#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	for (int i = 0;i<t;i++) {
		int n;
		cin>>n;
		float score = 0;
		int oudler = 0;
		string s;
		while (n--) {
			cin>>s;
			if (s == "fool") {
				oudler++;
				score += 4.5;
				continue;
			}
			if (s == "one" || s == "twenty-one")  {
				oudler++;
				score += 4.5;
			}
			else if (s == "king") {
				score+=4.5;
			}
			else if (s == "queen") {
				score += 3.5;
			}
			else if (s == "knight") {
				score += 2.5;
			}
			else if (s == "jack") {
				score += 1.5;
			}
			else {
				score += 0.5;
			}
			cin>>s;
			cin>>s;
		}
		cout<<"Hand #"<<i+1<<endl;
		if (oudler == 3) {
			if (score < 36) {
				cout<<"Game lost by "<<36 - score<<" point(s)."<<endl;
			}
			else {
				cout<<"Game won by "<<score - 36<<" point(s)."<<endl;
			}
		}
		else if (oudler == 2) {
			if (score < 41) {
				cout<<"Game lost by "<<41 - score<<" point(s)."<<endl;
			}
			else {
				cout<<"Game won by "<<score - 41<<" point(s)."<<endl;
			}
		}
		else if (oudler == 1) {
			if (score < 51) {
				cout<<"Game lost by "<<51 - score<<" point(s)."<<endl;
			}
			else {
				cout<<"Game won by "<<score - 51<<" point(s)."<<endl;
			}
		}
		else {
			if (score < 56) {
				cout<<"Game lost by "<<56 - score<<" point(s)."<<endl;
			}
			else {
				cout<<"Game won by "<<score - 56<<" point(s)."<<endl;
			}
		}
		if (i < t-1) cout<<endl;
	}
	return 0;
}