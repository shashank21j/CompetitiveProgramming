#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int t1, t2, final, att, ct1, ct2, ct3;
    int idx = 0;
    while(t--) {
        cin >> t1 >> t2 >> final >> att >> ct1 >> ct2 >> ct3;
        int sum = t1 + t2 + final + att + (ct1 + ct2 + ct3 - min(min(ct1, ct2), ct3))/2;
        cout << "Case " << ++idx << ": ";
        if (sum >= 90) {
            cout << "A" << endl;
        } else if (sum >= 80) {
            cout << "B" << endl;
        } else if (sum >= 70) {
            cout << "C" << endl;
        } else if (sum >= 60) {
            cout << "D" << endl;
        } else {
            cout << "F" << endl;
        }
    }
    return 0;
}
