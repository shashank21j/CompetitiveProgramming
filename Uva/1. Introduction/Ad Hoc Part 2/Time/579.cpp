#include <bits/stdc++.h>
using namespace std;
int main () {
    int h,m;
    while (1) {
        scanf("%d:%d",&h,&m);
        if (h + m == 0) {
            break;
        }
        float mdeg = m*6;
        float hdeg = h*30 + 0.5*m;
        float res = abs(mdeg - hdeg);
        if (res > 180) res = 360-res;
        printf("%.3f\n",res);
    }
    return 0;
}