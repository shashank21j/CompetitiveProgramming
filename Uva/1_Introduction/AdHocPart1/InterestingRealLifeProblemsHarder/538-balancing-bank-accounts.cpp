#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, t;
    int idx = 0;
    while(cin >> n >> t) {
        if (n + t == 0) {
            break;
        }
        vector <string> names(n);
        vector < vector <int> > transactions(n, vector <int> (n, 0));
        map < string, int> r_names;
        for (int i = 0; i < n; i++) {
            cin >> names[i];
            r_names[names[i]] = i;
        }
        string a, b;
        int cash;
        for (int i = 0; i < t; i++) {
            cin >> a >> b >> cash;
            transactions[r_names[b]][r_names[a]] += cash;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                transactions[i][0] += transactions[i][j];
                transactions[0][j] += transactions[i][j];
                transactions[i][j] = 0;
            }
        }

        cout <<"Case #"<<++idx<<endl;
        int ctr = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (transactions[i][j] != 0 && transactions[j][i] != 0) {
                    transactions[i][j] -= transactions[j][i];
                    transactions[j][i] = 0;
                }
                if (transactions[i][j] < 0) {
                    transactions[j][i] = -1*transactions[i][j];
                    transactions[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (transactions[i][j] > 0) {
                    ctr += 1;
                    cout << names[i] << " " << names[j] << " " << transactions[i][j]<<endl;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
