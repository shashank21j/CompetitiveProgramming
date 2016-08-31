#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int r, c, p;
    cin >> t;
    while (t--) {
        cin >> r >> c >> p;
        vector <int> X(p);
        vector <int> Y(p);
        for (int i = 0; i < p; i++) {
            cin >> X[i];
            cin >> Y[i];
        }
        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());
        int mid = (p-1)/2;
        cout << "(Street: " << X[mid] << ", Avenue: " << Y[mid] << ")" << endl;
    }
    return 0;
}
