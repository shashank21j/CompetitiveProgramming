#include <bits/stdc++.h>
using namespace std;

int integer(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        res = res * 10 + (s[i] - 48);
    }
    return res;
}
int main () {
    int n;
    string s;
    while(getline(cin, s)) {
        n = integer(s);
        if (n == 0) {
            break;
        }
        int v = 0;
        int mini = INT_MAX;
        for (int i = 0;i < n; i++) {
            getline(cin, s);
            int l = -1;
            int r = 26;
            for (int j = 0; j < 25; j++) {
                if (s[j] == ' ') {
                    l = j;
                    break;
                }
            }
            for (int j = 24; j >= 0; j--) {
                if (s[j] == ' ') {
                    r = j;
                    break;
                }
            }
            int diff = r - l + 1;
            if (diff == 28) {
                diff = 0;
            }
            v += diff;
            mini = min(mini, diff);
        }
        cout << v - (n * mini) << endl;
    }
    return 0;
}
