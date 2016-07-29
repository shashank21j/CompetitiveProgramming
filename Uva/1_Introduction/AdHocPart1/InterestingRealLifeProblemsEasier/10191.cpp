#include <bits/stdc++.h>

using namespace std;
stringstream ss;
int convert(string s) {
    int a, b;
    char c;
    ss.str("");
    ss.clear();
    ss.str(s);
    ss >> a >> c >> b;
    return a*60 + b;
}

int main () {
    int n;
    int idx = 0;
    while (cin >> n) {
        int start = 0;
        int endi = 0;
        string starting;
        string ending;
        string remaining;
        int s1 = 600;
        int e1 = 1080;
        int max_begin = -1;
        int max_delta = -1;
        vector <pair <int, int> > meetings(n);
        for (int i = 0;i < n;i++) {
            cin >> starting >> ending;
            start = convert(starting);
            endi = convert(ending);
            meetings[i] = make_pair(start, endi);
            // cout << start <<" " << endi<<endl;
            getline(cin, remaining);
        }
        sort(meetings.begin(), meetings.end());
        for (int i = 0; i < n; i++) {
            start = meetings[i].first;
            endi = meetings[i].second;
            if (start - s1 > max_delta) {
                max_delta = start - s1;
                max_begin = s1;
            }
            s1 = endi;
        }
        if (e1 - endi > max_delta) {
            max_delta = e1 - endi;
            max_begin = endi;
        }
        int h = max_begin/60;
        int m = max_begin%60;
        cout << "Day #"<<++idx<<": the longest nap starts at "
        << h <<":"<<(m<10?"0":"")<< m<<" " << "and will last for ";
        if (max_delta/60>0) {
            cout<<max_delta/60<<" hours and ";
        }
        cout<<max_delta%60<<" minutes."<<endl;
    }
    return 0;
}
