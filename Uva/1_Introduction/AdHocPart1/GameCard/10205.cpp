#include "bits/stdc++.h"
using namespace std;
int main () {
	int t;
	cin>>t;
	
	int pos,val,suit;
	while(t--) {
		int n_shuffle;
		cin>>n_shuffle;
	
		vector <int> cards(52);
		for (int i = 0;i<52;i++) {
				cards[i] = i+1;
		}
		vector <int> shuffles[n_shuffle];
		for (int i = 0;i<n_shuffle;i++) {
			for (int j = 0;j<52;j++) {
				cin>>pos;
				shuffles[i].push_back(pos);
			}
		}

		char st[100];
		gets(st);
		while(gets(st)) {
			if (!st[0]) break;
			int k=0;
			int len = strlen(st);
			for (int i = 0; i<len; i++) {
				k *= 10;
				k += st[i]-48;
			}
			k-=1;
			vector <int> new_cards(52);
			for (int i = 0;i<52;i++) {
				pos = shuffles[k][i];
				//if (i<pos-1) swap(cards[i],cards[pos-1]);
				new_cards[i] = cards[pos-1];
			}
			for (int i = 0; i < 52; i++) {
				cards[i] = new_cards[i];
			}
		}
		for (int i=0;i<52;i++) {
			val = (cards[i]-1)%13;
			suit = (cards[i]-1)/13;
			if (val == 12) cout<<"Ace";
			else if (val == 11) cout<<"King";
			else if (val == 10) cout<<"Queen";
			else if (val == 9) cout<<"Jack";
			else cout<<val+2;
			if (suit == 0) cout<<" of Clubs"<<endl;
			else if (suit == 1) cout<<" of Diamonds"<<endl;
			else if (suit == 2) cout<<" of Hearts"<<endl;
			else if (suit == 3) cout<<" of Spades"<<endl;
		}
		if (t!=0) cout<<endl;
	}
	return 0;
}