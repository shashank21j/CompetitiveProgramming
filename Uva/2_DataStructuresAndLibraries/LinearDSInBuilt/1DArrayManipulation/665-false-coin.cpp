#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        set <int> incorrect;
        for (int i = 1; i <= n; i++) {
            incorrect.insert(i);
        }
        set <int> correct;
        for (int i = 0; i < k; i++) {
            int cnt;
            cin >> cnt;
            char sign;
            vector <int> weights(cnt*2);
            for (int i = 0; i< 2*cnt; i++) {
                cin >> weights[i];
            }
            cin >> sign;
            if (sign == '=') {
                for (auto i:weights) {
                    correct.insert(i);
                }
            }
        }
        for (auto i: correct) {
            incorrect.erase(i);
        }

        if ((int)incorrect.size() == 1) {
            cout<<*incorrect.begin()<<endl;
        } else {
            cout<<0<<endl;
        }
        if (t > 0) {
            cout << endl;
        }
    }
    return 0;
}
