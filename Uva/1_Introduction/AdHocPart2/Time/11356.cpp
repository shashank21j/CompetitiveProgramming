#include <bits/stdc++.h>

using namespace std;

bool leap(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    if (y % 4 == 0) return true;
    return false;
}

int days_in_month(vector <int> &days, int y, int m) {
    if (leap(y) && m == 1) {
        return 29;
    }
    else {
        return days[m];
    }
}

int main() {
    int t;
    cin >> t;
    string s;
    int k;
    int it = 0;
    map <string, int> month = {{"January", 0}, {"February", 1}, {"March", 2},
    {"April", 3}, {"May", 4}, {"June", 5}, {"July", 6}, {"August", 7},
    {"September", 8}, {"October", 9}, {"November", 10}, {"December", 11}};
    map <int, string> rev_month;
    for (auto i: month) {
        rev_month[i.second] = i.first;
    }
    vector <int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(t--) {
        cout<<"Case "<<++it<<": ";
        int y, d, m;
        char c;
        string mon;
        cin>>s;
        cin>>k;
        stringstream ss(s);
        ss>>y>>c;
        getline(ss,mon,'-');
        m = month[mon];
        ss>>d;
        int m_days = days_in_month(days, y, m);
        k -= m_days - d + 1;
        d = 1;
        m += 1;
        if (m == 12) {
            y += 1;
            m = 0;
        }

        while (m > 0) {
            m -= 1;
            k += days_in_month(days, y, m);
        }

        while (k > 365) {

            if (leap(y)) {
                k -= 366;
            }
            else {
                k -= 365;
            }
            y += 1;
        }
        while (k > days[m]) {
            k -= days_in_month(days, y, m);
            m += 1;
        }
        d += k;
        if (d > days_in_month(days, y, m)) {
            d = 1;
            m += 1;
        }
        if (m == 12) {
            y += 1;
            m = 0;
        }
        cout << y << "-" << rev_month[m] << "-" << (d<10?"0":"") << d << endl;
    }
    return 0;
}
