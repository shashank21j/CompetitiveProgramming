#include <bits/stdc++.h>
using namespace std;

int time_delta(int t2,int t1) {
    int delta;
    delta = t2 - t1;
    if (delta < 0) delta+= 1440;
    return delta;
}
int main () {
    int t;
    cin>>t;
    int idx = 0;
    while(t--) {
        cout<<"Case "<<++idx<<": ";
        int n;
        int h,m;
        char c;
        cin>>n;
        cin>>h>>c>>m;
        int t1 = h*60 + m;
        int h2, m2;
        int delta;
        int mini = INT_MAX;
        while (n--) {
            cin>>h2>>c>>m2;
            cin>>delta;
            mini = min(mini, time_delta(h2*60 + m2, t1) + delta);
        }
        cout<<mini<<endl;
    }
    return 0;
}
