#include <bits/stdc++.h>
using namespace std;
bool valid (int i,int j) {
    if (i >= 0 && i<=4 && j >= 0 && j<= 4) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    string s;
    string moves;
    getline(cin,s);
    int counter = 1;
    while (s.length()!=1 && s[0] != 'Z') {
        vector <string> board;
        board.push_back(s);
        for (int i = 0;i<4;i++) {
            getline(cin,s);
            board.push_back(s);
        }
        pair<int,int> blank;
        for (int i=0;i<5;i++) {
            for(int j=0;j<5;j++) {
                if (board[i][j] == ' ') {
                    blank.first = i;
                    blank.second = j;
                }
            }
        }
        bool flag = true;
        do {
            getline(cin,moves);
            for (int i = 0; i< moves.length();i++) {
                if (moves[i] == 'A') {
                    if (!valid(blank.first-1,blank.second)) {
                        flag = false;
                        break;
                    }
                    board[blank.first][blank.second] = board[blank.first-1][blank.second];
                    board[blank.first-1][blank.second] = ' ';
                    blank.first--;
                }
                else if (moves[i] == 'B') {
                    if (!valid(blank.first+1,blank.second)) {
                        flag = false;
                        break;
                    }
                    board[blank.first][blank.second] = board[blank.first+1][blank.second];
                    board[blank.first+1][blank.second] = ' ';
                    blank.first++;
                }
                else if (moves[i] == 'R') {
                    if (!valid(blank.first,blank.second+1)) {
                        flag = false;
                        break;
                    }
                    board[blank.first][blank.second] = board[blank.first][blank.second+1];
                    board[blank.first][blank.second+1] = ' ';
                    blank.second++;
                }
                else if (moves[i] == 'L') {
                    if (!valid(blank.first,blank.second-1)) {
                        flag = false;
                        break;
                    }
                    board[blank.first][blank.second] = board[blank.first][blank.second-1];
                    board[blank.first][blank.second-1] = ' ';
                    blank.second--;
                }
                else if (moves[i] != '0') {
                    flag = false;
                    break;
                }
            }
        }
        while (moves[moves.length() - 1] != '0');
        cout<<"Puzzle #"<<counter<<":"<<endl;
        counter++;
        if (flag == true) {
            for (int i=0;i<5;i++) {
                for (int j = 0; j<5; j++) {
                    cout<<board[i][j];
                    if (j<4) cout<<" ";
                }
                cout<<endl;
            }
        }
        else {
            cout<<"This puzzle has no final configuration."<<endl;
        }
        getline(cin,s);
        if (s.length()!=1 && s[0]!='Z') {
            cout<<endl;
        }
    }
    return 0;
}