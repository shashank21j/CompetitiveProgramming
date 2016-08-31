#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        vector <int> nums(n);
        for (int i = 0; i < n;i++) {
            cin >> nums[i];
        }
        int peaks = 0;
        for (int i = 0; i < n;i++) {
            int l = (i - 1 + n) % n;
            int r = (i + 1) % n;
            if ((nums[l] - nums[i]) * (nums[i] - nums[r]) < 0) {
                peaks += 1;
            }
        }
        cout << peaks << endl;
    }
    return 0;
}
