#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <string> cards(13);
    while (cin>>cards[0]) {
        for (int i = 1; i < 13; i++) {
            cin>>cards[i];
        }
        map <char, vector<char> > hand;

        vector <char> colors = {'C', 'D', 'H', 'S'};

        for (int i = 0; i < 13; i++) {
            hand[cards[i][1]].push_back(cards[i][0]);
        }

        map <char, bool> suits;

        for (auto i:colors) {
            suits[i] = false;
        }

        int hand_score = 0;
        int extra = 0;
        char win = 'O';
        int max_suit_size = 0;
        for (auto ii:colors) {
            vector <char> i = hand[ii];
            if (i.size() <= 1) {
                extra += 2;
            }
            else if (i.size() == 2) {
                extra += 1;
            }

            bool king  = false;
            bool queen = false;
            bool jack  = false;
            bool ace   = false;
            int suit_score = 0;
            int suit_size = i.size();
            for (auto j:i) {
                if (j == 'A') {
                    ace = true;
                    suits[ii] = true;
                }
                if (j == 'K') {
                    king  = true;
                    suit_score += 3;
                    if (suit_size == 1) {
                        suit_score -= 1;
                    }
                    else {
                        suits[ii] = true;
                    }
                }
                else if (j == 'Q') {
                    queen = true;
                    suit_score += 2;
                    if (suit_size <= 2) {
                        suit_score -= 1;
                    }
                    else {
                        suits[ii] = true;
                    }
                }
                else if (j == 'J') {
                    jack  = true;
                    suit_score += 1;
                    if (suit_size <= 3) suit_score -= 1;
                }
                else if (j == 'A') {
                    ace   = true;
                    suit_score += 4;
                }
            }
            hand_score += suit_score;
            if (suit_size >= max_suit_size) {
                win = ii;
                max_suit_size = suit_size;
            }
        }
        if (suits['D'] && suits['H'] && suits['S'] && suits['C'] && hand_score >= 16) {
            cout<<"BID NO-TRUMP"<<endl;
        }
        else if (hand_score + extra < 14) {
            cout<<"PASS"<<endl;
        }
        else if (hand_score + extra>= 14) {
            cout<<"BID "<<win<<endl;
        }
    }
    return 0;
}
