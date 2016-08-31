#include <bits/stdc++.h>
using namespace std;

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
    int n;
    int m;
    string inp;
    bool flag = false;
    while (cin >> n >> m) {
        if (n + m == 0) {
            break;
        }
        if (flag == false) {
            flag = true;
        } else {
            cout << endl;
        }
        int n1 = n;
        map <string, string> ranker;
        map <string, int> ranks;
        map <int, string> rev_ranks;
        while (n1--) {
            cin >> inp;
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
            tournament[i][3] = i;
        }
        int total_points = 0;
        while (m--) {
            char tmp;
            string player1;
            string player2;
            int goal1;
            int goal2;
            cin >> player1 >> goal1 >> tmp >> goal2 >> player2;
            /*
            0 is points
            1 goal delta
            2 is goal scored
            3 is wins
            4 team id
            5 is games played
            6 draw
            7 lose
            8 goal taken
            */
            if (goal1 > goal2) {
                tournament[ranks[player1]][0] += (-1) * 3;
                tournament[ranks[player1]][4] += (-1) * 1; // wins
                tournament[ranks[player1]][1] += (-1) * (goal1 - goal2);
                tournament[ranks[player1]][2] += (-1) * goal1;
                tournament[ranks[player1]][5] += 1;
                tournament[ranks[player1]][8] += goal2;

                tournament[ranks[player2]][1] += (-1) * (goal2 - goal1);
                tournament[ranks[player2]][2] += (-1) * goal2;
                tournament[ranks[player2]][5] += 1;
                tournament[ranks[player2]][7] += 1;
                tournament[ranks[player2]][8] += goal1; // goal taken
            } else if (goal1 == goal2) {
                total_points -= 1;
                tournament[ranks[player1]][0] += (-1) * 1;
                tournament[ranks[player1]][2] += (-1) * goal1;
                tournament[ranks[player1]][5] += 1;
                tournament[ranks[player1]][6] += 1;
                tournament[ranks[player1]][8] += goal2;

                tournament[ranks[player2]][0] += (-1) * 1;
                tournament[ranks[player2]][2] += (-1) * goal2;
                tournament[ranks[player2]][5] += 1;
                tournament[ranks[player2]][6] += 1;
                tournament[ranks[player2]][8] += goal1;
            } else if (goal1 < goal2) {
                tournament[ranks[player2]][0] += (-1) * 3;
                tournament[ranks[player2]][4] += (-1) * 1; // wins
                tournament[ranks[player2]][1] += (-1) * (goal2 - goal1);
                tournament[ranks[player2]][2] += (-1) * goal2;
                tournament[ranks[player2]][5] += 1;
                tournament[ranks[player2]][8] += goal1;

                tournament[ranks[player1]][1] += (-1) * (goal1 - goal2);
                tournament[ranks[player1]][2] += (-1) * goal1;
                tournament[ranks[player1]][5] += 1;
                tournament[ranks[player1]][7] += 1;
                tournament[ranks[player1]][8] += goal2; // goal taken
            }
        }

        sort(tournament.begin(), tournament.end());
        int rank;
        pair <pair <int, int>, int> past;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                past = make_pair(make_pair(tournament[i][0], tournament[i][1]), tournament[i][2]);
                rank = i + 1;
            } else {
                pair <pair <int, int>, int> curr = make_pair(make_pair(tournament[i][0], tournament[i][1]), tournament[i][2]);
                if (curr > past) {
                    rank = i + 1;
                    past = curr;
                } else {
                    rank = -1;
                }
            }

            if (rank > 0) {
                cout.width(2);
                cout << right << rank << ".";
            } else {
                cout << "   ";
            }

            cout.width(16);
            cout << right << rev_ranks[tournament[i][3]];
            cout.width(4);
            cout << right << (-1) * tournament[i][0];
            cout.width(4);
            cout << right << tournament[i][5];
            cout.width(4);
            cout << right << (-1) * tournament[i][2];
            cout.width(4);
            cout << right << tournament[i][8];
            cout.width(4);
            cout << right << (-1) * tournament[i][1];
            cout.width(7);
            if ((-1)*tournament[i][4] + tournament[i][6] + tournament[i][7] > 0) {
                cout << right << fixed << setprecision(2)
            << (double)((-100)*tournament[i][0]) / (double)((-3)*tournament[i][4] + 3*tournament[i][6] + 3*tournament[i][7]);
            } else {
                cout << right << "N/A";
            }
            cout << endl;
        }
    }
    return 0;
}
