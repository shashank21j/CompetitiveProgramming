#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    while (cin >> n) {
        vector <int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int cnt1;
        int cnt2;
        int median;
        int median1;
        int median2;
        if (n % 2 == 0) {
            int A = arr[(n - 1) / 2];
            int B = arr[n / 2];
            median = A;
            vector <int>:: iterator low = lower_bound(arr.begin(), arr.end(), A);
            vector <int>:: iterator high = upper_bound(arr.begin(), arr.end(), B);
            cnt1 = high - low;
            cnt2 = B - A + 1;
        } else {
            median = arr[n / 2];
            vector <int>:: iterator low = lower_bound(arr.begin(), arr.end(), median);
            vector <int>:: iterator high = upper_bound(arr.begin(), arr.end(), median);
            cnt1 = high - low;
            cnt2 = 1;
        }
        cout << median << " " << cnt1 << " " << cnt2 << endl;
    }
    return 0;
}
