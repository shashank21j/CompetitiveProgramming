#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h, n;
    int x1, y1, x2, y2;
    while (cin >> w >> h >> n) {
        if (w + h + n == 0) {
            break;
        }
        vector <vector <int> > board(h, vector <int> (w, 0));
        for (int i = 0; i < n; i++) {
            cin >> x1 >> y1 >> x2 >> y2;
            for (int ii = min(y1, y2); ii <= max(y1, y2); ii++) {
                for (int jj = min(x1, x2); jj <= max(x1, x2); jj++) {
                    board[ii-1][jj-1] = 1;
                }
            }
        }
        int white = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (board[i][j] == 0) {
                    white += 1;
                }
            }
        }
        if (white == 0) {
            cout << "There is no empty spots." << endl;
        } else if (white == 1) {
            cout << "There is one empty spot." << endl;
        } else {
            cout << "There are " << white << " empty spots." << endl;
        }
    }
    return 0;
}
