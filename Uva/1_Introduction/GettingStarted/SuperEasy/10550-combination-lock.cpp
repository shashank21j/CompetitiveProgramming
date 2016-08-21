#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    while(scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        }
        cout << 720 + ((a + 40 - b) % 40) * 9 + 360 + ((40 - b + c) % 40) * 9 + ((c + 40 - d) % 40) * 9 << endl;
    }
    return 0;
}
