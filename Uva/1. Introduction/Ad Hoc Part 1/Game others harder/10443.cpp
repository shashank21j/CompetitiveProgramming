#include <bits/stdc++.h>
using namespace std;

bool valid (int a,int b,int n,int m) {
    if (a >= 0 && a < n && b >= 0 && b<m) {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    int t;
    cin>>t;
    int n,m,c;
    while (t--) {
        cin >> n >> m >> c;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin>>grid[i];
        }

        while (c--) {
            vector<string> new_grid;
            for (int i = 0; i <n; i++) {
                string temp = "";
                for (int j = 0;j<m;j++) {
                    char ch = grid[i][j];
                    if (ch == 'R') ch = 'P';
                    else if (ch == 'S') ch = 'R';
                    else if (ch == 'P') ch = 'S';
                    if (valid(i-1,j,n,m) && grid[i-1][j] == ch) {
                        temp += ch;
                    }
                    else if (valid(i+1,j,n,m) && grid[i+1][j] == ch) {
                        temp += ch;
                    }
                    else if (valid(i,j+1,n,m) && grid[i][j+1] == ch) {
                        temp += ch;
                    }
                    else if (valid(i,j-1,n,m) && grid[i][j-1] == ch) {
                        temp += ch;
                    }
                    else {
                        temp += grid[i][j];
                    }
                }
                new_grid.push_back(temp);
            }
            for (int i = 0;i<n;i++) {
                for (int j = 0;j<m;j++) {
                    grid[i][j] = new_grid[i][j];
                }
            }
        }
        for (int i = 0;i<n;i++ ) {
            cout<<grid[i]<<endl;
        }
        if (t > 0) cout<<endl;
    }
    return 0;
}
