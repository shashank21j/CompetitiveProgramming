#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector <pair<int, int> > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
            if (arr[i].first < 0) {
                arr[i].second = 1;
                arr[i].first *= -1;
            } else {
                arr[i].second = 0;
            }
        }
        sort(arr.begin(), arr.end());

        int beg1 = 0;
        int beg2 = 1;
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i].second == beg1) {
                cnt1 += 1;
                beg1 ^= 1;
            }
            if (arr[i].second == beg2) {
                cnt2 += 1;
                beg2 ^= 1;
            }
        }
        cout << max(cnt1, cnt2) << endl;
    }
    return 0;
}
