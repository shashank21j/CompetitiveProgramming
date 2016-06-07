#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (1) {
        cin>>n;
        if (n == 0) break;
        vector < vector < vector < int> > > states;
        vector < vector < vector < int> > > moves;
        vector < vector<int> > grid(n, vector <int> (n,0));
        vector < vector<int> > grid_l90(n, vector <int> (n,0));
        vector < vector<int> > grid_r90(n, vector <int> (n,0));
        vector < vector<int> > grid_180(n, vector <int> (n,0));
        states.push_back(grid);
        int a,b,a_l90,b_l90,a_r90,b_r90,a_180,b_180;
        char c;
        bool winner = false;
        for (int i =  0;i<2*n;i++) {
            cin>>a>>b>>c;
            a--;b--;

            a_l90 = n-b-1;
            b_l90 = a;

            a_r90 = b;
            b_r90 = n-a-1;

            a_180 = n-a-1;
            b_180 = n-b-1;
            if (c == '+') {
                grid[a][b] = 1;
                grid_l90[a_l90][b_l90] = 1;
                grid_r90[a_r90][b_r90] = 1;
                grid_180[a_180][b_180] = 1;
            }
            else if (c == '-') {
                grid[a][b] = 0;
                grid_l90[a_l90][b_l90] = 0;
                grid_r90[a_r90][b_r90] = 0;
                grid_180[a_180][b_180] = 0;
            }
            if (winner == false) {
                for (int j = 0;j<states.size();j++) {
                    bool flag = true;
                    for (int k = 0;k<n;k++) {
                        for (int l = 0;l<n;l++) {
                            if (states[j][k][l] != grid[k][l]) {
                                flag = false;
                            }
                        }
                    }
                    if (flag == true) {
                        if (i%2 == 0) {
                            cout<<"Player 2 wins on move "<<i + 1<<endl;
                        }
                        else {
                            cout<<"Player 1 wins on move "<<i + 1<<endl;
                        }
                        winner = true;
                        break;
                    }
                }
            }
            states.push_back(grid);
            states.push_back(grid_l90);
            states.push_back(grid_r90);
            states.push_back(grid_180);
        }
        if (winner == false) {
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}