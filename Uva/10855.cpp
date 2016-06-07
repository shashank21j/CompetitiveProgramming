#include <bits/stdc++.h>
using namespace std;
vector <string> rrotate(vector <string> grid) {
    vector <string> newgrid;
    for (auto i:grid) {
        newgrid.push_back(i);
    }
    int n = newgrid.size();
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            newgrid[i][j] = grid[n-j-1][i];
        }
    }
    return newgrid;
}
int main () {
    int N,n;
    while (1) {
        cin>>N>>n;
        if (N + n == 0) {
            break;
        }
        vector <string> big(N);
        vector <string> small(n);
        for (int i = 0;i<N;i++) {
            cin>>big[i];
        }
        for (int i = 0;i<n;i++) {
            cin>>small[i];
        }
        vector<string> rotate1 = rrotate(small);
        vector<string> rotate2 = rrotate(rotate1);
        vector<string> rotate3 = rrotate(rotate2);
        vector<int> cnt(4);
        for (int i = 0;i<N;i++) {
            if (i + n > N) break;
            for (int j = 0;j<N;j++) {
                if (j + n  > N) break;
                bool match1 = true;
                bool match2 = true;
                bool match3 = true;
                bool match4 = true;
                for (int k = 0;k<n;k++) {
                    for (int l = 0;l<n;l++) {
                        if (small[k][l] != big[i+k][j+l]) {
                            match1 = false;
                        }
                        if (rotate1[k][l] != big[i+k][j+l]) {
                            match2 = false;
                        }
                        if (rotate2[k][l] != big[i+k][j+l]) {
                            match3 = false;
                        }
                        if (rotate3[k][l] != big[i+k][j+l]) {
                            match4 = false;
                        }
                    }
                }
                if (match1 == true) cnt[0]++;
                if (match2 == true) cnt[1]++;
                if (match3 == true) cnt[2]++;
                if (match4 == true) cnt[3]++;
            }
        }
        for (int i = 0; i < 4;i++) {
            cout<<cnt[i];
            if (i<3) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}