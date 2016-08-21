#include <bits/stdc++.h>
using namespace std;

int main() {
    int angle;
    while(cin >> angle) {
        cout << (angle % 6 == 0?"Y":"N") << endl;
    }
    return 0;
}
