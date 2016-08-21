#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int idx = 0;
    while (t--) {
        char c;
        int n;
        cin >> c >> c >> n;
        bool flag = true;
        vector <vector <long long int> > grid(n, vector <long long int> (n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
                if (grid[i][j] < 0) {
                    flag = false;
                }
            }
        }
        if (flag == false) {
            cout << "Test #" << ++idx << ": Non-symmetric." << endl;
            continue;
        }
        flag = true;
        for (int i = 0; i <= n/2; i++) {
            flag = true;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != grid[n-i-1][n-j-1]) {
                    flag = false;
                    break;
                }
            }
            if (flag == false) {
                break;
            }
        }
        if (flag) {
            cout << "Test #" << ++idx << ": Symmetric." << endl;
        } else {
            cout << "Test #" << ++idx << ": Non-symmetric." << endl;
        }
    }
    return 0;
}
