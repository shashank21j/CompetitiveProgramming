#include <bits/stdc++.h>
using namespace std;

vector <int> calc(int t1, int t2) {
    int val1 = max(0, min(t2, 1080) - max(t1, 480));
    int val2 = max(0, min(t2, 1320) - max(t1, 1080));
    int val3 = max(0, min(t2, 1440) - max(t1, 1320));
    int val4 = max(0, min(t2, 480) - max(t1, 0));
    return {val1, val2, val3 + val4};
}
int main () {
    char inp;
    string number;
    int h1, m1, h2, m2;
    map <char, vector <double> > data = {
        {'A', {0.10, 0.06, 0.02}},
        {'B', {0.25, 0.15, 0.05}},
        {'C', {0.53, 0.33, 0.13}},
        {'D', {0.87, 0.47, 0.17}},
        {'E', {1.44, 0.80, 0.30}}
    };
    while (cin >> inp) {
        if (inp == '#') {
            break;
        }
        cin >> number >> h1 >> m1 >> h2 >> m2;
        int t1 = h1*60 + m1;
        int t2 = h2*60 + m2;
        double cost = 0;
        vector <double> rates = data[inp];
        vector <int> res(3);
        if (t1 == t2) {
            res[0] = 600;
            res[1] = 240;
            res[2] = 600;
        } else if (t1 > t2) {
            vector <int> res1 = calc(t1, 1440);
            vector <int> res2 = calc(0, t2);
            res[0] = res1[0] + res2[0];
            res[1] = res1[1] + res2[1];
            res[2] = res1[2] + res2[2];
        } else {
            res = calc(t1, t2);
        }
        cout<<fixed<<setprecision(2);
        cout.width(10);
        cout<<right<<number;
        cout.width(6);
        cout<<right<<res[0];
        cout.width(6);
        cout<<right<<res[1];
        cout.width(6);
        cout<<right<<res[2];
        cout.width(3);
        cout<<right<<inp;
        cout.width(8);
        cout<<right<<res[0] * rates[0] + res[1] * rates[1] + res[2] * rates[2]<<endl;
    }
    return 0;
}
