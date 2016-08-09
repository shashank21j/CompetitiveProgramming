#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        int n_p;
        cin >> n_p;
        vector <int> days(n+1, 0);
        int p;
        for (int i = 0; i < n_p; i++) {
            cin >> p;
            for (int i = 0; i <= n; i += p) {
                days[i] = 1;
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if ((i + 1)%7 == 0 || i%7 == 0) {
                continue;
            }
            if (days[i] == 1) {
                cnt += 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
