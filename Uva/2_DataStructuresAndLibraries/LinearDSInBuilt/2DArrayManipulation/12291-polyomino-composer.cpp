#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n + m == 0) {
            break;
        }
        vector <string> large(n + 2*(m-1));
        vector <string> small(n);
        string t = "";
        for (int i = 0; i < n + 2*(m-1); i++) {
            t += '.';
        }
        for (int i = 0; i < n + 2*(m-1); i++) {
            large[i] = t;
        }

        for (int i = 0; i < n; i++) {
            cin >> t;
            for (int j = 0; j < n; j++) {
                large[i + m - 1][j + m - 1] = t[j];
            }
        }
        for (int i = 0; i < m; i++) {
            cin >> small[i];
        }
        int cnt = 0;
        for (int i = 0; i < n + m - 1; i++) {
            for (int j = 0; j < n + m - 1; j++) {
                bool flag = true;
                for (int i1 = 0; i1 < m; i1++) {
                    for (int j1 = 0; j1 < m; j1++) {
                        if (small[i1][j1] == '*' && large[i + i1][j + j1] != '*') {
                            flag = false;
                            break;
                        }
                    }
                    if (flag == false) {
                        break;
                    }
                }
                if (flag == true) {
                    cnt += 1;
                    for (int i1 = 0; i1 < m; i1++) {
                        for (int j1 = 0; j1 < m; j1++) {
                            if (small[i1][j1] == '*') {
                                large[i + i1][j + j1] = '.';
                            }
                        }
                    }
                }
            }
        }
        if (cnt == 2) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
