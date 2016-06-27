#include <bits/stdc++.h>
using namespace std;


int main() {
    double a, b;
    while(cin>>a>>b) {
        cout<<a<<" "<<b<<" ";
        double t = (43200*(86400-a))/abs(a-b);
        t = fmod(t,43200);
        int h = (int)(t/3600);
        int m = (int)round((fmod(t,3600)/60));
        if (m == 60) {
            h += 1;
            m = 0;
        }
        h %= 12;
        if (h == 0) {
            h = 12;
        }
        cout<<((h<10)?"0":"")<<h<<":"<<((m<10)?"0":"")<<m<<endl;
    }
    return 0;
}
