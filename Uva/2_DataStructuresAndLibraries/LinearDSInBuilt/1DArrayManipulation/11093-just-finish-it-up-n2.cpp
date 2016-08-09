#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int idx = 0;
    while (t--) {
        int n;
        cin >> n;
        vector <int> gas(n);
        vector <int> dist(n);
        vector <int> diff(n);
        for (int i = 0; i < n; i++) {
            cin >> gas[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> dist[i];
        }
        for (int i = 0; i < n; i++) {
            diff[i] = gas[i] - dist[i];
        }

        int sum = 0;
        for (int i = n-1; i >= 0; i--) {
            sum += diff[i];
        }
        cout<<"Case "<<++idx<<": ";
        if (sum < 0) {
            cout << "Not possible" << endl;
            continue;
        }
        vector <int> pos;

        for (int i = 0; i < n; i++) {
            if (diff[i] > 0) {
                pos.push_back(i);
            }
        }
        int res = -1;
        int endi;
        for (int i = 0; i < (int)pos.size(); i++) {
            sum = 0;
            int p = pos[i];
            endi = (p - 1 + n) % n;
            bool flag = true;
            while (p != endi) {
                sum += diff[p];
                if (sum < 0) {
                    flag = false;
                    break;
                }
                p += 1;
                p %= n;
            }
            if (flag) {
                res = pos[i] + 1;
                break;
            }
        }
        cout << "Possible from station " << res << endl;

    }
    return 0;
}
