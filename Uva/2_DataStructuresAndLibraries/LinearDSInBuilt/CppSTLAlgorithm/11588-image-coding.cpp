#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int r, c, m , n;
    int idx = 0;
    while (t--) {
        cin >> r >> c >> m >> n;
        vector <string> grid(r);
        for (int i = 0; i < r; i++) {
            cin >> grid[i];
        }
        vector <int> counts(26, 0);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                counts[grid[i][j] - 65] += 1;
            }
        }
        int maxi = -1;
        for (int i = 0; i < 26; i++) {
            maxi = max(counts[i], maxi);
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (counts[i] == maxi) {
                cnt += 1;
            }
        }
        cout << "Case " << ++idx << ": ";
        cout << m * cnt * maxi + n * (r * c - cnt * maxi) << endl;
    }
    return 0;
}
