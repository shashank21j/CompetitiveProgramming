#include <bits/stdc++.h>
using namespace std;

stringstream ss;
vector <int> readints(string s) {
    vector <int> res;
    int ele;
    ss.str("");
    ss.clear();
    ss.str(s);
    while (ss >> ele) {
        res.push_back(ele);
    }
    return res;
}
vector <string> readstr(string s) {
    vector <string> res;
    string ele;
    ss.str("");
    ss.clear();
    ss.str(s);
    while (ss >> ele) {
        res.push_back(ele);
    }
    return res;
}
int integer(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        res = res * 10 + (s[i] - 48);
    }
    return res;
}

int main() {
    string inp;
    int t;
    getline(cin, inp);
    t = integer(inp);
    while(t--) {
        getline(cin, inp);
        getline(cin, inp);
        vector <int> perm = readints(inp);
        getline(cin, inp);
        vector <string> vals = readstr(inp);
        int sz = (int)vals.size();
        vector <pair<int, string> > res(sz);
        for (int i = 0; i < sz; i++) {
            res[i] = make_pair(perm[i], vals[i]);
        }
        sort(res.begin(), res.end());
        for (int i = 0;i < sz; i++) {
            cout<<res[i].second<<endl;
        }
        if (t > 0) {
            cout<<endl;
        }
    }
}
