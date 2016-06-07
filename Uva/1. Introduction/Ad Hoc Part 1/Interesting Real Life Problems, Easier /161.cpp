#include <bits/stdc++.h>
using namespace std;
int main () {
    while (1) {
        vector <int> delta;
        int a,b,c;
        cin>>a>>b>>c;
        delta.push_back(a);
        delta.push_back(b);
        if (a == 0 && b == 0) {
            break;
        }
        while (c != 0) {
            delta.push_back(c);
            cin>>c;
        }
        vector <int > times(delta.size(),0);
        bool flag = false;
        int rangea,rangeb;
        do {
            int mint = times[0];
            int min_delta = delta[0];
            for (int i = 0;i<times.size();i++) {
                if (times[i] + delta[i] - 5 < mint + min_delta) {
                    mint = times[i];
                    min_delta = delta[i];
                }
            }
            for (int i = 0;i< times.size();i++) {
                if (times[i] + delta[i] >= mint + 2*min_delta) {
                    continue;
                }
                times[i] = times[i] + delta[i]*2;
            }
            rangea = times[0];
            rangeb = times[0] + delta[0] - 5;

            for (int i = 1; i< times.size();i++) {
                rangea = max(rangea,times[i]);
                rangeb = min(rangeb,times[i] + delta[i] - 5);
            }
             if (rangea >= 19000) {
                break;
            }
        }
        while (rangea >= rangeb);
        if (rangea >= 19000) {
            printf("Signals fail to synchronise in 5 hours\n");
        }
        else {
            printf ("%02d:%02d:%02d\n",rangea/3600,(rangea - (rangea/3600)*3600)/60,rangea%60);
        }
    }
    return 0;
}