#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector <int> DNA(10);
        vector <int> dishes(40, 0);
        vector <int> temp (40);
        for (int i = 0;i < 10; i++) {
            cin >> DNA[i];
        }
        dishes[19] = 1;
        for (int i = 0; i < 50; i++) {
            string s = "";
            for (int j = 0; j < 40; j++) {
                if (dishes[j] == 0) {
                    s += ' ';
                } else if (dishes[j] == 1) {
                    s += '.';
                } else if (dishes[j] == 2) {
                    s += 'x';
                } else if (dishes[j] == 3) {
                    s += 'W';
                }
            }
            cout << s << endl;
            for (int j = 0; j < 40; j++) {
                temp[j] = dishes[j];
            }
            for (int j = 0; j < 40; j++) {
                int sum1 = 0;
                for (int k = max(0, j - 1); k <= min(39, j+1); k++) {
                    sum1 += temp[k];
                }
                dishes[j] = DNA[sum1];
            }
        }
        if (t > 0) {
            cout << endl;
        }
    }
    return 0;
}
