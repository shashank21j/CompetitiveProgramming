#include <bits/stdc++.h>
using namespace std;

bool valid (int i, int j, int r, int c) {
    if (i >= 0 && i < r && j >= 0 && j < c) {
        return true;
    }
    return false;
}
int main() {
    int n, r, c, k;
    while (cin >> n >> r >> c >> k) {
        if (n + r + c + k == 0) {
            break;
        }
        vector <vector <int> > land(r, vector <int> (c, 0));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> land[i][j];
            }
        }

        for (int ii = 0; ii < k; ii++) {
            vector <vector <int> > new_land(r, vector <int> (c, 0));
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    if (valid(i + 1, j, r, c) && (land[i][j] - 1 + n) % n  == land[i + 1][j]) {
                        new_land[i][j] = (n + land[i][j] - 1) % n;
                    } else if (valid(i - 1, j, r, c) && (land[i][j] - 1 + n) % n  == land[i - 1][j]) {
                        new_land[i][j] = (n + land[i][j] - 1) % n;
                    } else if (valid(i, j + 1, r, c) && (land[i][j] - 1 + n) % n  == land[i][j + 1]) {
                        new_land[i][j] = (n + land[i][j] - 1) % n;
                    } else if (valid(i, j - 1, r, c) && (land[i][j] - 1 + n) % n  == land[i][j - 1]) {
                        new_land[i][j] = (n + land[i][j] - 1) % n;
                    } else {
                        new_land[i][j] = land[i][j];
                    }
                }
            }
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    land[i][j] = new_land[i][j];
                }
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << land[i][j];
                if (j < c - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
