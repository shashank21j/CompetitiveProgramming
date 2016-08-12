#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin >> n) {
        if (n == 0) {
            break;
        }
        vector <double> vals(n);
        for (int i = 0; i < n; i++) {
            cin >> vals[i];
        }
        double sum = 0;
        for (auto i:vals) {
            sum += i;
        }
        sum = sum / (double)n;
        double exchange = 0;
        for (int i = 0; i < n; i++) {
            if (vals[i] > sum) {
                exchange += vals[i] - sum;
            }
        }
        cout << "$";
        cout << fixed << setprecision(2) << exchange << endl;
    }
    return 0;
}
