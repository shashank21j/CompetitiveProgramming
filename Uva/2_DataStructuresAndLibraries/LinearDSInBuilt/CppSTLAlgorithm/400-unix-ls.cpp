#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        int maxl = -1;
        vector <string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
            maxl = max(maxl, (int)words[i].length());
        }
        sort(words.begin(), words.end());
        int w = 1 + (60 - maxl)/(maxl + 2);
        int l = n / w + (int)(n % w != 0);
        vector < vector < string> > grid(l, vector <string> (w, ""));
        int cnt = 0;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < l; j++) {
                if (cnt == n) {
                    break;
                }
                grid[j][i] = words[cnt++];
            }
        }
        for (int i = 0; i < 60; i++) {
            cout << "-";
        }
        cout << endl;
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < w; j++) {
                cout << grid[i][j];
                if (j < w - 1) {
                    for (int k = (int)grid[i][j].length(); k < maxl + 2; k++) {
                        cout << " ";
                    }
                } else {
                    for (int k = (int)grid[i][j].length(); k < maxl; k++) {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}
