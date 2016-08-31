#include <bits/stdc++.h>
using namespace std;

int time_cal(string s) {
    return (s[0]-48)*60 + (s[2]-48) * 10 + (s[3]-48);
}

stringstream ss;
int main() {
    int t;
    string inp;
    cin >> t;
    getline(cin, inp);
    getline(cin, inp);
    while (t--) {
        int max_team = -1;
        vector <vector<int> > teams_time(26, vector <int> (7, 0));
        vector <vector<int> > teams_solved(26, vector <int> (7, 0));
        vector <int> playing(26, 0);
        vector <vector<int> > leaderboard;
        int team_id;
        char problem_id;
        string time;
        char status;
        vector <vector <int> > data;
        while(getline(cin, inp)) {
            if (inp == "") {
                break;
            }
            ss.str("");
            ss.clear();
            ss.str(inp);
            ss >> team_id >> problem_id >> time >> status;
            int st = 0;
            if (status == 'Y') {
                st = 1;
            }
            vector <int> temp = {time_cal(time), team_id, problem_id - 65, st};
            data.push_back(temp);
        }
        sort(data.begin(), data.end());
        for (auto it:data) {
            int tm = it[0];
            int tid = it[1];
            int pid = it[2];
            int st = it[3];
            max_team = max(max_team, tid);
            // cout << tm << " " << tid << " " << pid << " " << st << endl;
            if (teams_solved[tid][pid] == 1) {
                continue;
            }
            playing[tid] = 1;
            if (st == 1) {
                teams_solved[tid][pid] = 1;
                teams_time[tid][pid] += tm;
            } else if (st == 0){
                teams_time[tid][pid] += 20;
            }
        }
        for (int i = 1; i <= max_team; i++) {
            int solved_count = 0;
            int timer = 0;
            for (int j = 0; j < 7; j++) {
                if (teams_solved[i][j] == 1) {
                    solved_count += 1;
                    timer += teams_time[i][j];
                }
            }
            vector <int> temp = {-1*solved_count, timer, i};
            leaderboard.push_back(temp);
        }
        sort(leaderboard.begin(), leaderboard.end());
        int idx = 1;
        leaderboard[0].push_back(idx);
        for (int i = 1; i < (int)leaderboard.size(); i++) {
            if (-1*leaderboard[i][0] == -1*leaderboard[i-1][0]
                && leaderboard[i][1] == leaderboard[i-1][1]) {
                leaderboard[i].push_back(idx);
            } else {
                leaderboard[i].push_back(i+1);
                idx = i+1;
            }
        }
        cout << "RANK" << " " << "TEAM" << " " << "PRO/SOLVED" << " " << "TIME" << endl;
        for (int i = 0; i < (int)leaderboard.size(); i++) {
            cout.width(4);
            cout << right << leaderboard[i][3] << " ";
            cout.width(4);
            cout << right << leaderboard[i][2];
            if (leaderboard[i][1] > 0) {
                cout << " ";
                cout.width(4);
                cout << right << -1*leaderboard[i][0] << " ";
                cout << "      ";
                cout.width(4);
                cout << right << leaderboard[i][1];
            }
            cout << endl;
        }
        if (t > 0) {
            cout << endl;
        }
    }
    return 0;
}
