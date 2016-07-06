#include <bits/stdc++.h>

using namespace std;
int main () {
    int a,b,c,d;
    while (cin>>a>>b>>c>>d) {
        if (a + b + c + d == 0) break;
        int t1 = a*60 + b;
        int t2 = c*60 + d;
        int t = t2 - t1;
        if (t < 0) t+= 1440;
        cout<<t<<endl;
    }
    return 0;
}
