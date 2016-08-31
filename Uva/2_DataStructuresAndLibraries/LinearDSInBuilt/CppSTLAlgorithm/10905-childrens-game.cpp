#include <bits/stdc++.h>
using namespace std;

bool comp(string a , string b) {
    string t1 = a + b;
    string t2 = b + a;
    return t1 > t2;
}
int main() {
    int n;
    while(cin >> n) {
        if (n == 0) {
            break;
        }
        vector <string> vals(n);
        for (int i = 0; i < n; i++) {
            cin >> vals[i];
        }
        sort(vals.begin(), vals.end(), comp);
        for (int i = 0; i < n; i++) {
            cout << vals[i];
        }
        cout << endl;
    }
    return 0;
}
