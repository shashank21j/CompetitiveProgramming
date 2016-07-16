#include <bits/stdc++.h>
using namespace std;

stringstream ss;
int main () {
    string s;
    vector <string> res;
    string temp;
    int N, M;
    int X, Y;
    int X1, X2, Y1, Y2;
    char C, A;
    string fname;
    int idx;
    bool flag = true;
    stack < pair<int, int> > pushpa;
    pair <int, int> tp;
    char tc;
    vector <vector <int> > visited;
    while(flag) {
        getline(cin, s);
        ss.str("");
        ss.clear();
        ss.str(s);
        ss >> C;
        switch (C) {
            case 'X' :
                flag = false;
                break;
            case 'I' :
                ss >> M >> N;
                temp = "";
                for (int i = 0;i < M; i++) {
                    temp += "O";
                }
                res.clear();
                res.resize(N, temp);
                break;
            case 'C' :
                for (int i = 0;i < res.size();i++) {
                    for (int j = 0;j < res[i].size();j++) {
                        res[i][j] = 'O';
                    }
                }
                break;
            case 'L' :
                ss >> X >> Y >> A;
                res[Y-1][X-1] = A;
                break;
            case 'V' :
                ss >> X >> Y1 >> Y2 >> A;
                if (Y1 > Y2) swap(Y1, Y2);
                for (int i = Y1 - 1; i < Y2; i++) {
                    res[i][X-1] = A;
                }
                break;
            case 'H' :
                ss >> X1 >> X2 >> Y >> A;
                if (X1 > X2) swap(X1, X2);
                for (int i = X1 - 1; i < X2; i++) {
                    res[Y-1][i] = A;
                }
                break;
            case 'K' :
                ss >> X1 >> Y1 >> X2 >> Y2 >> A;
                if (X1 > X2) swap(X1, X2);
                if (Y1 > Y2) swap(Y1, Y2);
                for (int i = Y1-1; i< Y2;i++) {
                    for (int j = X1 - 1; j < X2; j++) {
                        res[i][j] = A;
                    }
                }
                break;
            case 'F' :
                visited.clear();
                visited.resize(N, vector <int> (M, 0));
                ss >> X >> Y >> A;
                tc = res[Y-1][X-1];
                pushpa.push(make_pair(X-1, Y-1));
                while (!pushpa.empty()) {
                    tp = pushpa.top();
                    pushpa.pop();
                    res[tp.second][tp.first] = A;
                    visited[tp.second][tp.first] = 1;
                    if (tp.second - 1 >= 0 && res[tp.second - 1][tp.first] == tc && !visited[tp.second - 1][tp.first]) {
                        pushpa.push(make_pair(tp.first, tp.second - 1));
                    }
                    if (tp.second + 1 < N && res[tp.second + 1][tp.first] == tc && !visited[tp.second + 1][tp.first]) {
                        pushpa.push(make_pair(tp.first, tp.second + 1));
                    }
                    if (tp.first - 1 >= 0 && res[tp.second][tp.first - 1] == tc && !visited[tp.second][tp.first - 1]) {
                        pushpa.push(make_pair(tp.first - 1, tp.second));
                    }
                    if (tp.first + 1 < M && res[tp.second][tp.first + 1] == tc && !visited[tp.second][tp.first + 1]) {
                        pushpa.push(make_pair(tp.first + 1, tp.second));
                    }
                }
                break;
            case 'S' :
                ss >> fname;
                cout << fname << endl;
                for (int i = 0; i < res.size(); i++) {
                    cout<<res[i]<<endl;
                }
                break;
            default :
                break;
        }

    }
}
