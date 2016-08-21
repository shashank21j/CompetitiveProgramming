#include <bits/stdc++.h>

using namespace std;

bool chkone(string s) {
    int count = 0;
    if (s[0] == 'o') {
        count++;
    }
    if (s[1] == 'n') {
        count++;
    }
    if (s[2] == 'e') {
        count++;
    }
    if (count >= 2) return true;
    return false;
}
int main () {
    int t;
    cin>>t;
    string s;

    while (t--) {
        cin>>s;
        if (s.length() == 5) {
            cout<<3<<endl;
        }
        else if (chkone(s)) {
            cout<<1<<endl;
        }
        else {
            cout<<2<<endl;
        }
    }
    return 0;
}
