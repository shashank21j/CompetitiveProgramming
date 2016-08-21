#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ele;
    while (t--) {
        vector <vector <int> > wall;
        for(int i = 0; i < 5; i++) {
            vector <int> temp(2*i + 1, 0);
            for (int j = 0; j < i+1; j++) {
                cin >> temp[2*j];
            }
            vector <int> temp1(2*i + 2, 0);
            wall.push_back(temp);
            if (i < 4) {
                wall.push_back(temp1);
            }
        }
        wall[8][1] = (wall[6][0] - (wall[8][0] + wall[8][2]))/2;
        wall[8][3] = (wall[6][2] - (wall[8][2] + wall[8][4]))/2;
        wall[8][5] = (wall[6][4] - (wall[8][4] + wall[8][6]))/2;
        wall[8][7] = (wall[6][6] - (wall[8][6] + wall[8][8]))/2;

        for (int i = 8; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                wall[i-1][j] = wall[i][j] + wall[i][j+1];
            }
        }
        for (int i = 0; i < (int)wall.size(); i++) {
            for (int j = 0; j < (int)wall[i].size(); j++) {
                cout << wall[i][j];
                if (j < (int)wall[i].size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
