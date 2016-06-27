#include <bits/stdc++.h>
using namespace std;

int md(string d) {
    int n = 0;
    for (int i = 0;i<d.length() - 1;i++) {
        n = n*10 + d[i] - 48;
    }
    return n;
}
int main () {
    int t;
    cin>>t;
    cout<<t<<endl;
    vector <string> months = {"pop", "no", "zip", "zotz", "tzec", "xul",
                            "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac",
                            "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};

    vector <string> dates = {"imix", "ik", "akbal", "kan", "chicchan", "cimi",
                            "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben",
                            "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
    unordered_map <string, int> dic_month;
    for (int i = 0;i < months.size();i++) {
        dic_month[months[i]] = i;
    }
    while (t--) {
        string a, b;
        int n;
        cin>>a>>b>>n;
        int days = md(a) + n*365 + dic_month[b]*20;
        int new_y = days/260;
        int new_d = days%13;
        string new_m = dates[days%20];
        cout<<new_d + 1<<" "<<new_m<<" "<<new_y<<endl;
    }
    return 0;
}
