#include <bits/stdc++.h>
using namespace std;
int main () {
    map <string,string> di;
    map <string, int> di_cnt;
    string s;
    cin>>s;
    while(s!="#") {
        string r = "";
        vector <char> temp;
        for (int i = 0;i<s.length();i++) {
            if (s[i]>=97) temp.push_back(s[i] - 32);
            else temp.push_back(s[i]);
        }
        sort(temp.begin(), temp.end());
        for (auto i:temp) {
            r+=i;
        }
        di[r] = s;
        if (di_cnt.find(r) != di_cnt.end()) {
            di_cnt[r] += 1;
        } else {
            di_cnt[r] = 1;
        }
        cin>>s;
    }
    vector <string > res;
    for (auto i : di_cnt) {
        if (i.second == 1) {
            res.push_back(di[i.first]);
        }
    }
    sort(res.begin(), res.end());
    for (auto i: res) {
        cout<<i<<endl;
    }
    return 0;
}
