#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> moves;
    int ele;
    cin>>ele;
    while (ele != 0) {
        moves.push_back(ele);
        cin>>ele;
    }

    int p_count = 0;
    cin>>p_count;

    while (p_count != 0) {
        vector <int> player(p_count,0);
        vector <int> jumps(101,0);
        vector <int> skip(101,0);
        int a,b;
        cin>>a>>b;
        while (a != 0 || b != 0) {
            jumps[a] = b;
            cin>>a>>b;
        }
        for (int i = 0;i<101;i++) {
            if (jumps[i] == 0) {
                jumps[i] = i;
            }
        }
        cin>>ele;
        while (ele != 0) {
            if (ele > 0) {
                skip[ele] = 1;
            }
            else if (ele < 0){
                skip[-1*ele] = -1;
            }
            cin>>ele;
        }

        int cnt = 0;
        vector <int> ski(p_count,0);
        vector <int> stay(p_count,0);
        bool flag = true;
        int p = 0;
        int move;
        for (int i = 0;i<moves.size();i++) {
            if (p == p_count) p = 0;
            if (ski[p] == 1) {
                ski[p] = 0;
                p+=1;
                continue;
            }

            move = player[p] + moves[i];

            if (skip[move] == 1 && stay[p] == 0) {
                stay[p] = 1;
            }
            else if (skip[move] == 1 && stay[p] == 1) {
                stay[p] = 0;
            }

            if (skip[move] == -1) {
                ski[p] = 1;
            }

            if (move > 100) {
                move -= moves[i];
            }
            move = jumps[move];
            if (move == 100) {
                cout<<p+1<<endl;
                break;
            }
            player[p] = move;
            if (stay[p]!=1) p+=1;
        }
        cin>>p_count;
    }
}