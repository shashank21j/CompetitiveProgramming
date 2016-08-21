#include <bits/stdc++.h>
using namespace std;

int main() {
    string inp;
    int idx = 0;
    while(getline(cin, inp)) {
        vector <vector <int> > grid(3, vector <int> (3, 0));
        for (int i = 0; i < (int)inp.length(); i++) {
            if (inp[i] == 'a') {
                grid[0][0] += 1;
                grid[0][1] += 1;
                grid[1][0] += 1;
            } else if (inp[i] == 'b') {
                grid[0][0] += 1;
                grid[0][1] += 1;
                grid[0][2] += 1;
                grid[1][1] += 1;
            } else if (inp[i] == 'c') {
                grid[0][1] += 1;
                grid[0][2] += 1;
                grid[1][2] += 1;
            } else if (inp[i] == 'd') {
                grid[0][0] += 1;
                grid[1][0] += 1;
                grid[1][1] += 1;
                grid[2][0] += 1;
            } else if (inp[i] == 'e') {
                grid[0][1] += 1;
                grid[1][0] += 1;
                grid[1][1] += 1;
                grid[1][2] += 1;
                grid[2][1] += 1;
            } else if (inp[i] == 'f') {
                grid[0][2] += 1;
                grid[1][1] += 1;
                grid[1][2] += 1;
                grid[2][2] += 1;
            } else if (inp[i] == 'g') {
                grid[1][0] += 1;
                grid[2][0] += 1;
                grid[2][1] += 1;
            } else if (inp[i] == 'h') {
                grid[1][1] += 1;
                grid[2][0] += 1;
                grid[2][1] += 1;
                grid[2][2] += 1;
            } else if (inp[i] == 'i') {
                grid[1][2] += 1;
                grid[2][1] += 1;
                grid[2][2] += 1;
            }
        }
        cout << "Case #" << ++idx << ":" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << grid[i][j] % 10;
                if (j < 2) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
