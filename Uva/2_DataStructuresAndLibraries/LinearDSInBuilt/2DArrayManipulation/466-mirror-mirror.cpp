#include <bits/stdc++.h>
using namespace std;

vector <string> rotate(vector <string> &grid) {
    int n = (int)grid.size();
    vector <string> res;
    for (int i = 0; i < n; i++) {
        string t = "";
        for (int j = n - 1; j >= 0; j--) {
            t += grid[j][i];
        }
        res.push_back(t);
    }
    return res;
}

vector <string> reflection(vector <string> &grid) {
    int n = (int)grid.size();
    vector <string> res;
    for (int i = n - 1; i >= 0; i--) {
        res.push_back(grid[i]);
    }
    return res;
}

bool cmp (vector <string> &a, vector <string> b) {
    int n = (int)a.size();
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int idx = 0;
    while(cin >> n) {
        vector <string> grid_init(n);
        vector <string> grid_final(n);
        for (int i = 0; i < n; i++) {
            cin >> grid_init[i] >> grid_final[i];
        }
        cout << "Pattern " << ++idx << " was ";
        if (cmp(grid_init, grid_final)) {
            cout << "preserved." << endl;
            continue;
        }

        vector <string> new_grid = rotate(grid_init);
        if (cmp(new_grid, grid_final)) {
            cout << "rotated 90 degrees." << endl;
            continue;
        }

        new_grid = rotate(new_grid);
        if (cmp(new_grid, grid_final)) {
            cout << "rotated 180 degrees." << endl;
            continue;
        }

        new_grid = rotate(new_grid);
        if (cmp(new_grid, grid_final)) {
            cout << "rotated 270 degrees." << endl;
            continue;
        }

        new_grid = reflection(grid_init);
        if (cmp(new_grid, grid_final)) {
            cout << "reflected vertically." << endl;
            continue;
        }

        new_grid = rotate(new_grid);
        if (cmp(new_grid, grid_final)) {
            cout << "reflected vertically and rotated 90 degrees." << endl;
            continue;
        }

        new_grid = rotate(new_grid);
        if (cmp(new_grid, grid_final)) {
            cout << "reflected vertically and rotated 180 degrees." << endl;
            continue;
        }

        new_grid = rotate(new_grid);
        if (cmp(new_grid, grid_final)) {
            cout << "reflected vertically and rotated 270 degrees." << endl;
            continue;
        }

        cout << "improperly transformed." << endl;
    }
    return 0;
}
