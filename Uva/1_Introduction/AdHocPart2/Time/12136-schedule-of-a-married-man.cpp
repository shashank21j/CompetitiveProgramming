#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin>>t;
    int idx = 0;
    while(t--) {
        cout<<"Case "<<++idx<<": ";
        int h11, m11, h12, m12;
        int h21, m21, h22, m22;
        char c;
        cin >> h11 >> c >> m11 >> h12 >> c >> m12;
        cin >> h21 >> c >> m21 >> h22 >> c >> m22;
        int t1 = h11*60 + m11;
        int t2 = h12*60 + m12;
        int w1 = h21*60 + m21;
        int w2 = h22*60 + m22;
        if ((w1 >= t1 && w1 <= t2) || (w2 >= t1 && w2 <= t2) || (w1 <= t1 && w2>=t2)) cout<<"Mrs Meeting"<<endl;
        else cout<<"Hits Meeting"<<endl;
    }
    return 0;
}
