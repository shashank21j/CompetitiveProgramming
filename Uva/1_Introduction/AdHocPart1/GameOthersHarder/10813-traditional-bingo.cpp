#include <bits/stdc++.h>
using namespace std;

bool did_win(vector <vector <int> > grid) {
    int check_v, check_h;
    for (int i = 0;i<5;i++) {
        check_h = 0;
        check_v = 0;
        for (int j = 0;j<5;j++) {
            if (grid[i][j] == 1) check_h++;
            if (grid[j][i] == 1) check_v++;
        }
        if (check_h == 5 || check_v == 5) {
            return true;
        }
    }
    check_h = 0;
    check_v = 0;
    for (int i = 0;i < 5;i++) {
        if (grid[i][i] == 1) check_h++;
        if (grid[i][5 - i - 1] == 1) check_v++;
    }
    if (check_h == 5 || check_v == 5) return true;
    return false;
}
int main () {
    int t;
    cin>>t;
    while (t--) {
        vector < vector<int> > bingo(5,vector<int> (5,0));
        vector < vector<int> > check(5,vector<int> (5,0));
        for (int i = 0;i<5;i++) {
            for (int j = 0;j<5;j++) {
                if (i == 2 && j == 2) {
                    continue;
                }
                cin>>bingo[i][j];
            }
        }

        check[2][2] = 1;

        vector <int> moves(75);
        for (int i = 0;i<75;i++) {
            cin>>moves[i];
        }
        bool win = false;
        for (int i = 0;i<moves.size();i++) {
            int ele = moves[i];
            for (int j = 0; j<5;j++) {
                for (int k = 0;k<5;k++) {
                    if (bingo[j][k] == ele) {
                        check[j][k] = 1;
                    }
                }
            }
            if (did_win(check)) {
                cout<<"BINGO after "<<i+1<<" numbers announced"<<endl;
                break;
            }
        }
    }
    return 0;
}
