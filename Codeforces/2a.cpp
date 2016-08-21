#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	map<string, int> score;
	vector <pair <string, int> > Arr(n);
	map <string,int> winners;
	string s;
	int v;
	string winner;
	int max=-1100000000;
	int iter = -1;
	for (int i=0;i<n;i++) {
		cin>>s>>v;
		Arr[i].first = s;
		Arr[i].second = v;
		if (score.find(s)!= score.end()) {
			score[s] +=v;
		}
		else {
			score[s] = v;
		}
	}
	for (map<string,int>::iterator it=score.begin(); it!=score.end(); ++it) {
		if (it -> second > max) {
			max = it -> second;
			winners.clear();
			winners[it -> first] = 1;
		}
		else if (it -> second == max) {
			winners[it -> first]=1;	
		}

	}
	score.clear();
	for (int i=0;i<n;i++) {
		s = Arr[i].first;
		v = Arr[i].second;
		if (score.find(s)!= score.end()) {
			score[s] +=v;
			if (score[s]>= max && winners.find(s) != winners.end()) {
				cout<<s<<endl;
				return 0;
			}
		}
		else {
			score[s] = v;
			if (score[s]>= max && winners.find(s) != winners.end() ) {
				cout<<s<<endl;
				return 0;
			}	
		}	
	}
	return 0;
}