#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C, N;
    int r, c;
    int r0, c0;
    int idx = 0;
    while (cin >> R >> C >> N) {
        if (R + C + N == 0) {
            break;
        }
        set <int> rows;
        set <int> cols;
        for (int i = 0; i < N; i++) {
            cin >> r >> c;
            rows.insert(r);
            cols.insert(c);
        }
        cin >> r0 >> c0;
        cout << "Case " << ++idx << ": ";
        if (rows.find(r0) == rows.end() && cols.find(c0) == cols.end()) {
            cout << "Escaped again! More 2D grid problems!" << endl;
        } else if (r0 > 0 && rows.find(r0 - 1) == rows.end() && cols.find(c0) == cols.end()) {
            cout << "Escaped again! More 2D grid problems!" << endl;
        } else if (r0 < R - 1 && rows.find(r0 + 1) == rows.end() && cols.find(c0) == cols.end()){
            cout << "Escaped again! More 2D grid problems!" << endl;
        } else if (c0 < C - 1 && rows.find(r0) == rows.end() && cols.find(c0 + 1) == cols.end()){
            cout << "Escaped again! More 2D grid problems!" << endl;
        } else if (c0 > 0 && rows.find(r0) == rows.end() && cols.find(c0 - 1) == cols.end()){
            cout << "Escaped again! More 2D grid problems!" << endl;
        } else {
            cout << "Party time! Let's find a restaurant!" << endl;
        }
    }
    return 0;
}
