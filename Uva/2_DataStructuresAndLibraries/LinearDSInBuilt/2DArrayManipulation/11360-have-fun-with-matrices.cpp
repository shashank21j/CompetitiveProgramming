#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n;
    int m;
    int a, b;
    string ele;
    cin >> t;
    int idx = 0;
    while (t--) {
        cin >> n;
        vector <vector <int> > grid(n, vector <int> (n, 0));
        for (int i = 0; i < n; i++) {
            cin >> ele;
            for (int j = 0; j < n; j++) {
                grid[i][j] = ele[j] - 48;
            }
        }
        vector <int> rows(n);
        vector <int> cols(n);
        for (int i = 0; i < n; i++) {
            rows[i] = i;
            cols[i] = i;
        }
        int trans = 0;
        int inc = 0;
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> ele;
            if (ele == "transpose") {
                trans ^= 1;
            } else if (ele == "row") {
                cin >> a >> b;
                if (trans) {
                    swap(cols[a-1], cols[b-1]);
                } else {
                    swap(rows[a-1], rows[b-1]);
                }
            } else if (ele == "col") {
                cin >> a >> b;
                if (trans) {
                    swap(rows[a-1], rows[b-1]);
                } else {
                    swap(cols[a-1], cols[b-1]);
                }
            } else if (ele == "inc") {
                inc += 1;
            } else if (ele == "dec") {
                inc -= 1;
            }
        }
        cout << "Case #" << ++idx << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (trans) {
                    cout << (10 + grid[rows[j]][cols[i]] + inc) % 10;
                } else {
                    cout << (10 + grid[rows[i]][cols[j]] + inc) % 10;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
