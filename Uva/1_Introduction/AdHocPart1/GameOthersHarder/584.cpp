#include <bits/stdc++.h>
using namespace std;
int val (char c) {
    if (c == 'X') return 10;
    else if (c == '/') return 11;
    else return c - 48;
}

int main () {
    string s;
    getline(cin,s);
    while (s != "Game Over") {
        vector < char> moves;
        vector <int> scores;
        for (int i = 0;i<s.length();i++) {
            if (s[i] != ' ') {
                moves.push_back(s[i]);
            }
        }
        int cnt = 0;
        int score = 0;
        for (int i = 0;i<moves.size();i++) {
            if (val(moves[i]) == 10 && cnt < 10) {
                score += 10;
                int t1 = val(moves[i+1]);
                int t2 = val(moves[i+2]);
                if (t2 == 11) score += 10;
                else score += t1 + t2;
            }
            else if (cnt < 10){
                int t1 = val(moves[i]);
                int t2 = val(moves[i+1]);
                if (t2 == 11) {
                    score += 10;
                    score += val(moves[i+2]);
                }
                else {
                    score += t1 + t2;
                }
                i+=1;
            }
            cnt++;
        }
        cout<<score;
        cout<<endl;
        getline(cin,s);
    }
    return 0;
}