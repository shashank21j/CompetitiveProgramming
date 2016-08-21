#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    int h,m;
    cin>>n;
    char c;
    map<string, float> dic = {{"UTC", 0.0}, {"GMT", 0.0}, {"BST", 1.0},
    {"IST", 1.0}, {"WET", 0.0}, {"WEST", 1.0}, {"CET", 1.0}, {"CEST", 2.0},
    {"EET", 2.0}, {"EEST", 3.0}, {"MSK", 3.0}, {"MSD", 4.0}, {"AST", -4.0},
    {"ADT", -3.0}, {"NST", -3.5}, {"NDT", -2.5}, {"EST", -5.0}, {"EDT", -4.0},
    {"CST", -6.0}, {"CDT", -5.0}, {"MST", -7.0}, {"MDT", -6.0}, {"PST", -8.0},
    {"PDT", -7.0}, {"HST", -10.0}, {"AKST", -9.0}, {"AKDT", -8.0},
    {"AEST", 10.0}, {"AEDT", 11.0}, {"ACST", 9.5}, {"ACDT", 10.5},
    {"AWST", 8.0}};
    int delta;
    while(n--) {
        string s;
        cin>>s;
        string t1, t2;
        if (s == "noon") {
            cin>>t1>>t2;
            delta = 720 + (dic[t2] - dic[t1])*60;
        }
        else if (s == "midnight") {
            cin>>t1>>t2;
            delta = (dic[t2] - dic[t1])*60;
        }
        else {
            stringstream ss(s);
            ss>>h>>c>>m;
            delta = h*60 + m;
            cin>>s;
            if (s[0] == 'p' && h < 12) delta += 720;
            if (s[0] == 'a' && h == 12) delta -= 720;
            cin>>t1>>t2;
            delta += (dic[t2] - dic[t1])*60;
        }
        if (delta < 0) delta += 1440;
        delta %= 1440;

        int parity = 0;
        if (delta == 0) {
            cout<<"midnight"<<endl;
            continue;
        }
        if (delta == 720) {
            cout<<"noon"<<endl;
            continue;
        }
        h = delta/60;
        m = delta%60;
        if (delta > 720) {
            parity = 1;
        }
        if (delta >= 780) {
            h -= 12;
        }

        if (h == 0) h = 12;
        cout<<h<<":"<<(m<10?"0":"")<<m<<" ";
        if (parity == 0) cout<<"a.m."<<endl;
        else cout<<"p.m."<<endl;
    }
    return 0;
}
