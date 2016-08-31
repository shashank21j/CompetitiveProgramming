#include <bits/stdc++.h>
using namespace std;

set <int> factorize (int n) {
    set <int> res;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            res.insert(i);
            res.insert(n / i);
        }
        if (i * i >= n) {
            break;
        }
    }
    return res;
}
int main() {
    int t;
    cin >> t;
    int C, R;
    int idx = 0;
    while (t--) {
        cout << "Case #" << ++idx << ":";
        cin >> C >> R;
        if (C == R) {
            cout << " " << 0 << endl;
            continue;
        }
        set <int> factors = factorize(C - R);
        for (auto i:factors) {
            if (C % i == R) {
                cout << " " << i;
            }
        }
        cout << endl;
    }
    return 0;
}
