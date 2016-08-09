/*
Just a little bit optimised O(n^2) will work.
I know this code is wrong but O(n), still AC and still same runtime :P
*/

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
        int pos = 0;
        for (int i = 0; i < n;i++) {
            if (diff[i] > 0) {
                pos = i;
                break;
            }
        }

        int endi = (pos - 1 + n) % n;
        int pos2 = pos;
        vector <int> new_diff(n);
        while (pos != endi) {
            new_diff[pos] = diff[pos];
            pos += 1;
            pos %= n;
        }
        vector <pair<int, int>> sec;
        sec.push_back(make_pair(diff[0], 0));
        sum = 0;
        pos = pos2;
        while (pos != n) {
            if (sum < 0 && diff[pos] > 0) {
                sec.push_back(make_pair(sum, pos2));
                sum = diff[pos];
                pos2 = pos;
            } else {
                sum += diff[pos];
            }
            pos += 1;
        }
        cout << "Possible from station " << pos2 + 1 << endl;

    }
    return 0;
}
