#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--) {
        int l, c;
        cin >> l >> c;
        vector <string> grid(l);
        for (int i = 0;i < l;i++) {
            cin>> grid[i];
        }
        int sardines = 0;
        int mackerels = 0;
        int salmon = 0;
        int groupers = 0;
        int turtles = 0;
        int dolphin = 0;
        int whale = 0;
        int shark = 0;
        vector <vector <int> >  visited(l,vector <int> (c,0));
        for (int i = 0;i < l;i++) {
            for (int j = 0; j < c;j++) {
                if (visited[i][j] || grid[i][j] == '.') {
                    continue;
                }
                int t1 = i;
                int u1 = j;
                while (t1 < l-1 && grid[t1+1][j] == grid[i][j]) {
                    t1 += 1;
                }
                while (u1 < c-1 && grid[i][u1 + 1] == grid[i][j]) {
                    u1 += 1;
                }
                int d1 = t1 - i + 1;
                int d2 = u1 - j + 1;
                if (d1 > d2) {
                    swap(d1, d2);
                }
                if (d1 == 1 && d2 == 1) {
                    sardines += 1;
                } else if (d1 == 1 && d2 == 2) {
                    mackerels += 1;
                } else if (d1 == 1 && d2 > 2) {
                    if (u1 - j + 1 == 1) {
                        int bi = i + 1;
                        int bj = j - 1;
                        int ci = i + 1;
                        int cj = j + 1;
                        if (bi < l && bj >= 0 && grid[bi][bj] != grid[i][j]) {
                            salmon += 1;
                        }
                        else if (ci < l && bj < c && grid[ci][cj] != grid[i][j]){
                            salmon += 1;
                        }
                    } else {
                        salmon += 1;
                    }
                } else if (d1 == d2 && d1 > 1) {
                    turtles += 1;
                } else if (d1 == 2 && d2 > 2) {
                    groupers += 1;
                } else if (d1 == 3 && d2 > 3) {
                    if (t1 - i + 1 == 3) {
                        if (j > 0 && grid[i + 1][j - 1] == grid[i][j]) {
                            visited[i + 1][j - 1] = 1;
                            shark += 1;
                        } else if (u1 < c - 1 && grid[t1 - 1][u1 + 1] == grid[i][j]) {
                            visited[t1 - 1][u1 + 1] = 1;
                            shark += 1;
                        } else {
                            dolphin += 1;
                        }
                    } else if (u1 - j + 1 == 3) {
                        if (i > 0 && grid[i - 1][j + 1] == grid[i][j]) {
                            visited[i - 1][j + 1] = 1;
                            shark += 1;
                        } else if (t1 < l - 1 && grid[t1 + 1][u1 - 1] == grid[i][j]) {
                            visited[t1 + 1][u1 - 1] = 1;
                            shark += 1;
                        } else {
                            dolphin += 1;
                        }
                    }
                } else if (d1 == 4 && d2 > 4) {
                    whale += 1;
                }
                for (int i1 = i; i1 <= t1; i1++) {
                    for (int j1 = j; j1 <= u1; j1++) {
                        visited[i1][j1] = 1;
                    }
                }
            }
        }
        cout << sardines << " " << mackerels << " " << salmon << " "
             << groupers << " " << turtles << " " << dolphin << " "
             << whale << " " << shark << endl;
        if (t > 0) cout<< endl;
    }
    return 0;
}
