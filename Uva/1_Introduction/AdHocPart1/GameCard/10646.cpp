#include <bits/stdc++.h>
using namespace std;
//#define SUBLIME

#if defined SUBLIME
#  define ISTREAM ifile
#else
#  define ISTREAM cin
#endif
int main() {
	#if defined (SUBLIME)
		ifstream ifile("stdin.input");
	#endif
	int n;
	ISTREAM>>n;
	vector<string> cards(52);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 52; j++) {
			ISTREAM>>cards[j];
		}
		int it = 26;
		int score = 0;
		int jumps = 0;
		for (int j = 0; j < 3; j++) {
			//cout<<cards[it]<<endl;
			char c = cards[it][0];
			if (c>='2' && c<='9') {
				score += c - 48;
				it -= 10 - (c - 48);
				jumps += 10 - (c - 48);
			}
			else score +=10;
			it--;
			jumps +=1;
		}
		//cout<<cards[it]<<" "<<score<<" "<<it<<" "<<jumps<<endl;
		cout<<"Case "<<i+1<<": ";
		if (score-1 <= it) cout<<cards[score-1]<<endl;
		else {
			cout<<cards[score+jumps-1]<<endl;
		}
	}
	return 0;
}