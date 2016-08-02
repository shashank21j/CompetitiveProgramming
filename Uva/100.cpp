#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> counts(1000001, -1);
    int i = 1;
    while (i < 1000001) {
        int cnt = 0;
        unsigned int bck = i;
        while (bck != 1) {
            if (bck < 1000001 && counts[bck] != -1) {
                cnt += counts[bck];
                bck = 1;
                break;
            }
            if (bck % 2 == 1) {
                bck = 3*bck + 1;
            } else {
                bck /= 2;
            }
            cnt += 1;
        }
        counts[i] = cnt;
        i += 1;
    }
    int n, t;
    while (cin >> n >> t) {
        int maxi = -1;
        for (i = min(n, t); i <= max(n, t); i++) {
            maxi = max(maxi, counts[i]);
        }
        cout << n << " " << t << " " << maxi + 1 << endl;
    }
    return 0;
}
