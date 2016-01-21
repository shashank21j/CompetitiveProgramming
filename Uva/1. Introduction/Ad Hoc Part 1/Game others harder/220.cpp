#include <bits/stdc++.h>
using namespace std;
bool valid(int i,int j) {
    if (i >= 0 && i<=7 && j >= 0 && j<= 7) {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    int n;
    cin>>n;
    for (int ii = 0;ii<n;ii++) {
        vector <string> board(8);
        char player[2];
        player[0] = 'W';
        player[1] = 'B';
        char pl;
        char move;
        for (int i = 0; i < 8; i++) {
            cin>>board[i];
        }
        int p;
        cin>>pl;
        if (pl == 'W') {
            p = 0;
        }
        else {
            p = 1;
        }
        while (1) {
            cin>>move;
            vector <pair <int,int> > avlbl_moves;
            if (move == 'Q') {
                for (int i = 0; i < 8; i++) {
                    cout<<board[i]<<endl;
                }
                break;
            }

            for (int i = 0;i<8;i++) {
                for (int j = 0;j<8;j++) {
                    bool success = false;
                    if (board[i][j] == '-') {
                        for (int xdel = -1; xdel < 2; xdel++) {
                            for (int ydel= -1; ydel<2; ydel++) {
                                if (xdel == 0 && ydel == 0) continue;
                                if (success == false && valid(i+xdel,j+ydel) && board[i+xdel][j+ydel] == player[p^1]) {
                                    int i1 = i + 2*xdel;
                                    int j1 = j + 2*ydel;
                                    while (valid(i1,j1) && board[i1][j1]!='-') {
                                        if (board[i1][j1] == player[p]) {
                                            success = true;
                                            break;
                                        }
                                        i1 += xdel;
                                        j1 += ydel;
                                    }
                                }
                            }
                        }
                    }
                    if (success == true) {
                        avlbl_moves.push_back(make_pair(i+1,j+1));
                    }
                }
            }
            if (move == 'L') {
                for (int i = 0;i<avlbl_moves.size();i++) {
                    cout<<"("<<avlbl_moves[i].first<<","<<avlbl_moves[i].second<<")";
                    if (i < avlbl_moves.size()-1) {
                        cout<<" ";
                    }
                }
                if (avlbl_moves.size() == 0) {
                    cout<<"No legal move.";
                }
                cout<<endl;
            }
            else if (move == 'M') {
                int x,y,num;
                cin>>num;
                x = num/10 - 1;
                y = num%10 - 1;
                bool flag = false;
                for (int i = 0;i<avlbl_moves.size();i++) {
                    if (x+1 == avlbl_moves[i].first && y+1 == avlbl_moves[i].second) flag = true;
                }
                if (flag == false) {
                    p^=1;
                }
                vector <pair<int,int> > pos;
                for (int xdel = -1;xdel<2;xdel++) {
                    for(int ydel = -1;ydel <2;ydel++) {
                        x = num/10 - 1;
                        y = num%10 - 1;
                        if (valid(x+xdel,y+ydel) && board[x+xdel][y+ydel] == player[p^1]) {
                            pos.push_back(make_pair(x,y));
                            x += xdel;
                            y += ydel;
                            while (valid(x,y) && board[x][y] == player[p^1]) {
                                pos.push_back(make_pair(x,y));
                                x += xdel;
                                y += ydel;
                            }
                            if (valid(x,y) && board[x][y] == player[p]) {
                                for (int i=0;i<pos.size();i++) {
                                    board[pos[i].first][pos[i].second] = player[p];
                                }
                            }
                            pos.clear();
                        }

                    }
                }
                int white = 0;
                int black = 0;
                for (int i=0;i<8;i++) {
                    for (int j=0;j<8;j++) {
                        if (board[i][j] == 'W') white++;
                        else if (board[i][j] == 'B') black++;
                    }
                }
                printf("Black - %2d White - %2d\n",black,white);
                p^=1;
            }
            else if (move == 'P') {
                for (int i = 0;i<8;i++) {
                    cout<<board[i]<<endl;
                }
            }
        }
        if (ii < n-1) {
            cout<<endl;
        }
        board.clear();
    }
    return 0;
}