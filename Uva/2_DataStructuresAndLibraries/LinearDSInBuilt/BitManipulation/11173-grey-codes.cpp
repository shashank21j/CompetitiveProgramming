#include <bits/stdc++.h>
using namespace std;
long long int my_pow(long long int base, long long int exp) {
    long long int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int main() {
    int t;
    int n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        vector <int> arr(32);
        vector <int> lol = {0, 1, 1, 0};
        int res = 0;
        for (int i = 0; i < 32; i++) {
            arr[i] = lol[(k % my_pow(2, i + 2))/my_pow(2, i)];
        }
        for (int i = 31; i >= 0; i--) {
            res *= 2;
            if (arr[i] == 1) {
                res += 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
