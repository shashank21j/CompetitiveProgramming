#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    int h,m;
    char c;
    while (t--) {
        cin>>h>>c>>m;
        int m_mod = (60 - m)%60;
        int h_mod = 12 - h;
        if (m_mod > 0) {
            h_mod -= 1;
        }
        if (h_mod <= 0) h_mod += 12;
        cout<<(h_mod < 10?"0":"")<< h_mod << ":" << (m_mod < 10?"0":"") <<
        m_mod << endl;
    }
    return 0;
}
