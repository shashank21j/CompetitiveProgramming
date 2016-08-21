#include <bits/stdc++.h>
using namespace std;

int value (string s) {
    if (s[0] <= '9' && s[0] >= '2') {
        return s[0] - '0' - 1;
    }
    else if (s[0] == 'T') {
        return 9;
    }
    else if (s[0] == 'J') {
        return 10;
    }
    else if (s[0] == 'Q') {
        return 11;
    }
    else if (s[0] == 'K') {
        return 12;
    }
    else if (s[0] == 'A') {
        return 0;
    }
    else {
        return -1;
    }
}
int main() {
    string s;
    cin >> s;
    while (s != "#") {
        vector <string> card(52);
        vector <vector <pair<string,bool> > > clock(13,vector<pair<string,bool> >());
        card[0] = s;
        clock[0].push_back(make_pair(card[0],false));
        for (int i = 1; i < 52; i++) {
            cin >> card[i];
        }
        reverse(card.begin(), card.end());
        for (int i = 0;i<52;i++) {
            clock[i%13].push_back(make_pair(card[i],false));
        }
        pair <string,bool> start = clock[12].back();
        clock[12].pop_back();
        int cnt = 0;

        while (!start.second) {

            cnt += 1;
            int pos = value(start.first);
            if (clock[pos].back().second == true) {
                break;
            }
            start.second = true;
            clock[pos].insert(clock[pos].begin(), start);
            start = clock[pos].back();
            clock[pos].pop_back();
        }
        cout<<((cnt<10)?"0":"")<<cnt<<","<<start.first<<endl;
        cin >> s;
    }
    return 0;
}
