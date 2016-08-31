#include <bits/stdc++.h>
using namespace std;

stringstream ss;
int integer(string s) {
    int res;
    ss.str("");
    ss.clear();
    ss.str(s);
    ss >> res;
    return res;
}

string small(string s) {
    string res = "";
    for (int i = 0; i < (int)s.length(); i++) {
        if ((int)s[i] <= 90 && (int)s[i] >= 65) {
            res += (char)((int)s[i] + 32);
        } else {
            res += s[i];
        }
    }
    return res;
}

int main() {
    int t;
    string inp;
    int n;
    string tournament_name;
    int m;
    getline(cin, inp);
    t = integer(inp);
    while (t--) {
        getline(cin, tournament_name);
        getline(cin, inp);
        n = integer(inp);
        int n1 = n;
        map <string, string> ranker;
        map <string, int> ranks;
        map <int, string> rev_ranks;
        while (n1--) {
            getline(cin, inp);
            ranker[small(inp)] = inp;
        }
        int cnt = 0;
        for (auto i:ranker) {
            ranks[i.second] = cnt;
            rev_ranks[cnt] = i.second;
            cnt += 1;
        }
        vector <vector <int> > tournament(n, vector<int> (9,0));
        for (int i = 0; i < n; i++) {
            tournament[i][5] = i;
        }
        getline(cin, inp);
        m = integer(inp);
        while (m--) {
            char tmp;
            string player1;
            string player2;
            int goal1;
            int goal2;
            getline(cin, inp);
            ss.str("");
            ss.clear();
            ss.str(inp);
            getline(ss, player1, '#');
            ss >> goal1;
            ss >> tmp;
            ss >> goal2;
            ss >> tmp;
            getline(ss, player2);
            /*
            0 is points
            1 is wins
            2 goal delta
            3 is goal scored
            4 is games played
            5 team id
            6 draw
            7 lose
            8 goal taken
            */
            if (goal1 > goal2) {
                tournament[ranks[player1]][0] += (-1) * 3;
                tournament[ranks[player1]][1] += (-1) * 1; // wins
                tournament[ranks[player1]][2] += (-1) * (goal1 - goal2);
                tournament[ranks[player1]][3] += (-1) * goal1;
                tournament[ranks[player1]][4] += 1;
                tournament[ranks[player1]][8] += goal2;

                tournament[ranks[player2]][2] += (-1) * (goal2 - goal1);
                tournament[ranks[player2]][3] += (-1) * goal2;
                tournament[ranks[player2]][4] += 1;
                tournament[ranks[player2]][7] += 1;
                tournament[ranks[player2]][8] += goal1; // goal taken
            } else if (goal1 == goal2) {
                tournament[ranks[player1]][0] += (-1) * 1;
                tournament[ranks[player1]][3] += (-1) * goal1;
                tournament[ranks[player1]][4] += 1;
                tournament[ranks[player1]][6] += 1;
                tournament[ranks[player1]][8] += goal2;

                tournament[ranks[player2]][0] += (-1) * 1;
                tournament[ranks[player2]][3] += (-1) * goal2;
                tournament[ranks[player2]][4] += 1;
                tournament[ranks[player2]][6] += 1;
                tournament[ranks[player2]][8] += goal1;
            } else if (goal1 < goal2) {
                tournament[ranks[player2]][0] += (-1) * 3;
                tournament[ranks[player2]][1] += (-1) * 1; // wins
                tournament[ranks[player2]][2] += (-1) * (goal2 - goal1);
                tournament[ranks[player2]][3] += (-1) * goal2;
                tournament[ranks[player2]][4] += 1;
                tournament[ranks[player2]][8] += goal1;

                tournament[ranks[player1]][2] += (-1) * (goal1 - goal2);
                tournament[ranks[player1]][3] += (-1) * goal1;
                tournament[ranks[player1]][4] += 1;
                tournament[ranks[player1]][7] += 1;
                tournament[ranks[player1]][8] += goal2; // goal taken
            }
        }

        sort(tournament.begin(), tournament.end());
        cout << tournament_name << endl;

        for (int i = 0; i < n; i++) {
            cout << i + 1 << ") " << rev_ranks[tournament[i][5]] << " " << (-1) * tournament[i][0] << "p"
            << ", " << tournament[i][4] << "g (" << (-1) * tournament[i][1] << "-" << tournament[i][6]
            << "-" << tournament[i][7] << "), " << (-1) * tournament[i][2] << "gd (" << (-1) * tournament[i][3]
            << "-" << tournament[i][8] << ")" << endl;
        }
        if (t > 0) {
            cout << endl;
        }
    }
    return 0;
}
