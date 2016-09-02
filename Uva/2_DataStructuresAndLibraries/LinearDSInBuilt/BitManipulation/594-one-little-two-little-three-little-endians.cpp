#include <bits/stdc++.h>
using namespace std;

long long int integer(string s) {
    long long int res = 0;
    for (int i = 0; i < 32; i++) {
        res *= 2;
        if (s[i] == '1') {
            res += 1;
        }
    }
    return res;
}

string bin(long long int n) {
    string res = "";
    for (int i = 0;i < 32; i++) {
        res += (char)((n % 2) + 48);
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main() {
    long long int n;
    while(cin >> n) {
        long long int n1 = n;
        if (n < 0) {
            n += 4294967296;
        }
        string s = bin(n);
        string new_s;
        for (int i = 24; i < 32; i++) {
            new_s += s[i];
        }
        for (int i = 16; i < 24; i++) {
            new_s += s[i];
        }
        for (int i = 8; i < 16; i++) {
            new_s += s[i];
        }
        for (int i = 0; i < 8; i++) {
            new_s += s[i];
        }
        long long int res = integer(new_s);
        cout << n1 << " converts to ";
        if (new_s[0] == '1') {
            cout << res - 4294967296 << endl;
        } else {
            cout << res << endl;
        }
    }
    return 0;
}
