#include <bits/stdc++.h>
using namespace std;

bool valid (int i, int j) {
    if (i>=0 && i < 3 && j >= 0 && j < 3) {
        return true;
    }
    else {
        return false;
    }
}
bool undone(vector <string> s) {
    for (int i = 0;i<3;i++) {
        if (s[i] != "000") return true;
    }
    return false;
}
void doit(vector<string> &grid) {
    vector <string> temp;
    for (int i = 0;i<3;i++) {
        temp.push_back(grid[i]);
    }
    for (int i = 0;i<3;i++) {
        for (int j = 0;j<3;j++) {
            int cnt = 0;
            if (valid(i-1,j) && temp[i-1][j] == '1') cnt+=1;
            if (valid(i+1,j) && temp[i+1][j] == '1') cnt+=1;
            if (valid(i,j-1) && temp[i][j-1] == '1') cnt+=1;
            if (valid(i,j+1) && temp[i][j+1] == '1') cnt+=1;
            if (cnt%2 == 0) {
                grid[i][j] = '0';
            }
            else {
                grid[i][j] = '1';
            }
        }
    }
}
int main () {
    int t;
    cin>>t;
    while(t--) {
        vector<string> grid(3);
        for (int i = 0;i<3;i++) {
            cin>>grid[i];
        }
        int cnt = 0;
        while (undone(grid)) {
            doit(grid);
            cnt++;
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}