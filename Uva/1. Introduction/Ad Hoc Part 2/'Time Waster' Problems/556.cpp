#include <bits/stdc++.h>
using namespace std;

int n,m;

bool valid (int i, int j, vector<string> &grid,int idel,int jdel) {
    if (i + idel< 0 || i + idel >= n || j + jdel < 0 || j + jdel >= m) {
        return false;
    }
    else if (grid[i + idel][j + jdel] == '1') {
        return false;
    }
    else {
        return true;
    }
}
pair <int,int> direction_change(int i, int j) {
    if (i == 0 && j == 1) {
        return make_pair(-1,0);
    }
    else if (i == 1 && j == 0) {
        return make_pair(0,1);
    }
    else if (i == -1 && j == 0) {
        return make_pair(0,-1);
    }
    else if(i == 0 && j == -1) {
        return make_pair(1,0);
    }
}
pair<int, int> right_dir(int i, int j) {
    if (i == 0 && j == 1) {
        return make_pair(1,0);
    }
    else if (i == 1 && j == 0) {
        return make_pair(0,-1);
    }
    else if (i == -1 && j == 0) {
        return make_pair(0,1);
    }
    else if(i == 0 && j == -1) {
        return make_pair(-1,0);
    }
}
void trace(vector<vector<int> > &trace_m ,vector <string> &grid, int posi, int posj, int idel, int jdel) {
    pair <int, int> dir = right_dir(idel,jdel);
    trace_m[posi][posj] += 1;
    while (!valid (posi, posj,grid,dir.first,dir.second)) {
        dir = direction_change(dir.first,dir.second);
    }
    if (posi + dir.first == n-1 && posj + dir.second == 0) return;
    trace(trace_m,grid,posi + dir.first, posj + dir.second,dir.first,dir.second);
}
using namespace std;
int main () {
    cin>>n>>m;
    while (n + m > 0) {
        vector <string> grid(n);
        vector <vector <int> > trace_m(n,vector<int> (m,0));

        for (int i = 0;i<n;i++) {
            cin>>grid[i];
        }
        for (int i = 0;i<n;i++) {
            for (int j = 0;j<m;j++) {
                if (grid[i][j] == '1') {
                    trace_m[i][j] = 5;
                }
            }
        }
        trace(trace_m,grid,n-1,0,0,1);
        vector <int > cnt(5,0);
        for (int i = 0;i<n;i++) {
            for (int j = 0;j<m;j++) {
                if (grid[i][j] == '1') continue;
                if (trace_m[i][j] > 4) continue;
                cnt[trace_m[i][j]]+=1;
            }
        }
        for (int i = 0;i<5;i++) {
            printf("%3d",cnt[i]);
        }
        cout<<endl;
        cin>>n>>m;
    }
    return 0;
}