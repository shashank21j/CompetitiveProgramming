#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, v0;
    while (cin>>v>>v0) {
        if (v == 0 && v0 == 0) break;
        double factor1 = 1;
        double max_l = -1;
        double max_f = -1;
        bool flag = false;
        for (int i = 1;i <= v;i++) {
            factor1 = (double)i;
            if (v/factor1 > v0) {
                double length = factor1*0.3*sqrt(v/factor1 - v0);
                if (abs(length - max_l) < 0.000001 && factor1 != max_f) {
                    flag = true;
                }
                else if (length > max_l) {
                    max_f = factor1;
                    max_l = length;
                    flag = false;
                }

            }
        }
        if (max_l <= 0 || flag) cout<<0<<endl;
        else cout<<max_f<<endl;
    }
    return 0;
}
