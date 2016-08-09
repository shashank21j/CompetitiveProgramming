#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        vector <int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        sort(stations.begin(), stations.end());
        int can_go_to = 0;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (stations[i] > can_go_to) {
                flag = false;
                break;
            } else {
                can_go_to = stations[i] + 200;
            }
        }
        if (can_go_to < 1422) {
            flag = false;
        }
        if (flag == false) {
            cout << "IMPOSSIBLE" << endl;
            continue;
        }
        can_go_to -= 1422;
        for (int i = 0; i < n; i++) {
            stations[i] = 1422 - stations[i];
        }
        reverse(stations.begin(), stations.end());
        for (int i = 0; i < n; i++) {
            if (stations[i] > can_go_to) {
                flag = false;
                break;
            } else {
                can_go_to = stations[i] + 200;
            }
        }
        if (flag == false) {
            cout << "IMPOSSIBLE" << endl;
        } else {
            cout << "POSSIBLE" << endl;
        }
    }
    return 0;
}
