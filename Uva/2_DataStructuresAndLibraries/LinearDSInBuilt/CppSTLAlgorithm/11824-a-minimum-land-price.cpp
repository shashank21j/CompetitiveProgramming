#include <bits/stdc++.h>
using namespace std;
long long int my_pow(long long int base, long long int exp) {
    long long int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
        if (res > 5000000) {
            break;
        }
    }
    return res;
}
int main() {
    long long int t;
    long long int n;
    cin >> t;
    while(t--) {
        vector <long long int> arr;
        int sz = 0;
        while (cin >> n) {
            if (n == 0) {
                break;
            }
            arr.push_back(n);
            sz += 1;
        }
        sort(arr.begin(), arr.end());
        long long int sum = 0;
        for (int i = sz - 1; i >= 0; i--) {
            long long int tmp = my_pow(arr[i], sz - i);
            if (tmp > 5000000) {
                sum = 5000001;
                break;
            }
            sum += 2 * tmp;
            if (sum > 5000000) {
                break;
            }
        }
        if (sum > 5000000) {
            cout << "Too expensive" << endl;
        } else {
            cout << sum << endl;
        }
    }
    return 0;
}
