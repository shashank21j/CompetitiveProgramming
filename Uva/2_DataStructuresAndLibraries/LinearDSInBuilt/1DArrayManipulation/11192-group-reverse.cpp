#include <bits/stdc++.h>
using namespace std;

string rev(string s, int n) {
    for (int i = 0; i < (int)s.length(); i+=n) {
        reverse(s.begin() + i, s.begin() + i + n);
    }
    return s;
}
int main() {
    int n;
    cin >> n;
    while (n != 0) {
        string s;
        cin >> s;
        cout<< rev(s, ((int)s.length())/n) << endl;
        cin >> n;
    }
    return 0;
}
