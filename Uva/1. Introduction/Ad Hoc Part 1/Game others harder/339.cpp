#include <bits/stdc++.h>
using namespace std;
bool valid (int a, int b, int m, int n) {
    if (a >= 0 && a < m && b >= 0 && b<n) {
        return true;
    }
    else {
        return false;
    }
}
bool check(vector <vector <int> > &grid, int a, int b, int ele, int m, int n) {
    if (valid(a,b, m, n) == false) {
        return false;
    }
    if (grid[a][b] == -1) {
        return false;
    }
    if (valid (a-1,b,m,n) && grid[a-1][b] == ele ) {
        return true;
    }
    else if (valid(a, b-1,m,n) && grid[a][b-1] == ele) {
        return true;
    }
    else if (valid(a+1, b,m,n) && grid[a+1][b] == ele) {
        return true;
    }
    else if (valid(a,b+1,m,n) && grid[a][b+1] == ele) {
        return true;
    }
    else {
        return false;
    }
}
void delelemt(vector <vector <int> > &grid, int a, int b, int ele,int m,int n) {
    grid[a][b] = -1;
    if (valid(a-1,b,m,n) && grid[a-1][b]==ele) {
        delelemt(grid,a-1,b,ele,m,n);
    }
    if (valid(a+1,b,m,n) && grid[a+1][b]==ele) {
        delelemt(grid,a+1,b,ele,m,n);
    }
    if (valid(a,b-1,m,n) && grid[a][b-1]==ele) {
        delelemt(grid,a,b-1,ele,m,n);
    }
    if (valid(a,b+1,m,n) && grid[a][b+1]==ele) {
        delelemt(grid,a,b+1,ele,m,n);
    }
}
void cleanup(vector <vector <int> > &grid, int m, int n) {
    vector < vector <int> > temp;
    for (int j = 0;j<n;j++) {
        vector<int> t;
        for (int i = 0;i<m;i++) {
            if (grid[i][j] != -1) {
                t.push_back(grid[i][j]);
            }
        }
        if (t.size()>0) {
            temp.push_back(t);
        }
    }
    for (int j = 0;j<temp.size();j++) {
        for (int i = 0;i<temp[j].size();i++) {
            grid[i][j] = temp[j][i];
        }
        for (int i = temp[j].size();i<m;i++) {
            grid[i][j] = -1;
        }
    }
    for (int j = temp.size();j<n;j++) {
        for (int i = 0;i<m;i++) {
            grid[i][j] = -1;
        }
    }
}



int main () {
    int counter = 0;
    int m,n;
    cin>>m>>n;
    while (1) {
        if (m == 0 || n == 0) {
            break;
        }
        vector < vector <int> > grid(m,vector<int> (n,0));
        for (int i = 0;i<m;i++) {
            for (int j = 0;j<n;j++) {
                cin>>grid[i][j];
            }
        }
        int ma, mb;
        while (1) {
            cin>>ma>>mb;
            if (ma == 0 || mb == 0) {
                break;
            }
            ma--;mb--;
            if (valid(ma,mb,m,n) && check(grid,ma,mb,grid[ma][mb],m,n)) {
                delelemt(grid,ma,mb,grid[ma][mb],m,n);
                cleanup(grid,m,n);
            }
        }
        bool flag = false;
        for (int i = 0;i<m;i++) {
            for (int j = 0;j<n;j++) {
                if (grid[i][j] != -1) {
                    flag = true;
                }
            }
        }
        counter++;
        cout<<"Grid "<<counter<<"."<<endl;
        if (flag == false) {
            cout<<"    Game Won"<<endl;
        }
        else {
            for (int i = m-1;i>=0;i--) {
                cout<<"    ";
                for (int j = 0;j<n;j++) {
                    if (grid[i][j]==-1) {
                        cout<<" ";
                        if (j < n-1) cout<<" ";
                    }
                    else {
                        cout<<grid[i][j]<<" ";
                    }
                }
                cout<<endl;
            }
        }
        cin>>m>>n;
        if (!(m == 0 || n == 0)) {
            cout<<endl;
        }
    }
    return 0;
}
