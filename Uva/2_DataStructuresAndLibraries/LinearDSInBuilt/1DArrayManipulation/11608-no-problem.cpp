#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int idx = 0;
    while(cin >> n) {
        if (n < 0) {
            break;
        }
        vector <int> created(12);
        vector <int> usage(12);
        for (int i = 0; i < 12; i++) {
            cin >> created[i];
        }
        for (int i = 0; i < 12; i++) {
            cin >> usage[i];
        }
        cout << "Case " << ++idx << ":" << endl;
        for (int i = 0; i < 12; i++) {
            if (usage[i] > n) {
                cout << "No problem. :(" << endl;
            } else {
                cout << "No problem! :D" << endl;
                n -= usage[i];
            }
            n += created[i];
        }
    }
    return 0;
}
