#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a, b, c;
    int idx = 0;
    while(cin >> n) {
        if (n == 0) {
            break;
        }
        vector <pair<int, int> > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c;
            arr[i] = make_pair(a, c - b);
        }
        cout << "Case #" << ++idx << ":" << endl;
        int maxi;
        int mini;
        while(1) {
            maxi = -1;
            mini = INT_MAX;
            for (auto i:arr) {
                maxi = max(i.first, maxi);
                mini = min(i.first, mini);
            }
            if (maxi == mini || maxi >= 10000) {
                break;
            }
            for (int i = 0; i < n; i++) {
                if (arr[i].first < maxi) {
                    arr[i].first += arr[i].second;
                    maxi = max(arr[i].first, maxi);
                }
            }
        }
        if (maxi >= 10000) {
            cout << "Unknown bugs detected." << endl;
        } else {
            cout << "The actual year is " << maxi << "." << endl;
        }
        cout << endl;
    }
    return 0;
}
