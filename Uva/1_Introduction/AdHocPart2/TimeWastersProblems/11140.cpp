#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    int N, M, S;
    int n, m;
    cin >> T;
    bool flag;
    while (T--) {
        cin >> N >> M >> S;
        vector <string> major_grid(N);
        for (int i = 0;i < N; i++) {
            cin >> major_grid[i];
        }
        while (S--) {
            cin >> n >> m;
            vector <string> small_grid(n);
            int min_i = INT_MAX;
            int max_i = -1;
            vector <int> non_empty;
            for (int i = 0; i < n; i++) {
                cin >> small_grid[i];
                flag = false;
                for (int j = 0;j < m;j++) {
                    if (small_grid[i][j] == '*') {
                        min_i = min(min_i, j);
                        flag = true;
                        break;
                    }
                }
                if (flag) {
                    non_empty.push_back(i);
                }
                for (int j = m-1; j >= 0;j--) {
                    if (small_grid[i][j] == '*') {
                        max_i = max(max_i, j);
                        break;
                    }
                }
            }
            int begi, endi;
            if (non_empty.size() == 0) {
                begi = 0;
                endi = 0;
            }
            else {
                begi = non_empty[0];
                endi = non_empty.back();
            }
            vector <string> parse_grid;
            for (int i = begi; i <= endi; i++) {
                string temp = "";
                for (int j = min_i; j <= max_i; j++) {
                    temp += small_grid[i][j];
                }
                parse_grid.push_back(temp);
            }
            int n_n = parse_grid.size();
            int m_m = parse_grid[0].size();
            bool flag = false;
            for (int i = 0;i < N - n_n + 1; i++) {
                for (int j = 0; j < M - m_m + 1; j++) {
                    flag = true;
                    for (int k = i; k < i + n_n; k++) {
                        for (int l = j; l < j + m_m; l++) {
                            if (parse_grid[k-i][l-j] == '.') continue;
                            if (major_grid[k][l] != parse_grid[k - i][l - j]) {
                                flag = false;
                                break;
                            }
                        }
                        if (flag == false) {
                            break;
                        }
                    }
                    if (flag == true) {
                        cout << "Yes" << endl;
                        break;
                    }
                }
                if (flag == true) {
                    break;
                }
            }
            if (flag == false) {
                cout << "No" << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
