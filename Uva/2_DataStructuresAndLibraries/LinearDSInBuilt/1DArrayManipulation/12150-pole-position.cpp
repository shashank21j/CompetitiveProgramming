#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        vector <int> position(n, -1);
        vector <pair<int, int> > inp(n);
        for (int i = 0; i < n; i++) {
            cin >> inp[i].first >> inp[i].second;
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
            int pos = i + inp[i].second;
            if (pos >= n || pos < 0 || position[pos] != -1) {
                flag = false;
                break;
            } else {
                position[pos] = inp[i].first;
            }
        }
        if (flag == false) {
            cout<<"-1"<<endl;
        } else {
            for (int i = 0; i < n;i++) {
                cout<<position[i];
                if (i < n-1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
