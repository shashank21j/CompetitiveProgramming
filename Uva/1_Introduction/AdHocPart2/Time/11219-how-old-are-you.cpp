#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin>>t;
    int it = 0;
    while (t--) {
        cout<<"Case #"<<++it<<": ";
        string t1;
        string t2;
        cin>>t1>>t2;
        char c;
        int d1, m1, y1;
        int d2, m2, y2;

        stringstream ss(t1);
        ss >> d1 >> c >> m1 >> c >> y1;
        stringstream ss1(t2);
        ss1 >> d2 >> c >> m2 >> c >> y2;

        int y = y1 - y2;
        int m = m1 - m2;
        int d = d1 - d2;

        int delta = y * 360 + m * 30 + d;

        if (delta < 0) cout<<"Invalid birth date"<<endl;
        else if (delta >= 131*360) cout<<"Check birth date"<<endl;
        else cout<<delta/360<<endl;

    }
    return 0;
}
