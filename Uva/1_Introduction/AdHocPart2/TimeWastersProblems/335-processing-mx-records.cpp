#include <bits/stdc++.h>

using namespace std;

bool is_int(string s) {
    for (int i = 0;i < s.length(); i++) {
        if (s[i] > 57 || s[i] < 48) {
            return false;
        }
    }
    return true;
}
stringstream ss;
int main() {
    int n;
    string aa;
    getline(cin,aa);
    ss.str(aa);
    ss>>n;
    ss.str("");
    ss.clear();

    string a, b;
    int p;
    string source;
    set <string> multi;
    unordered_map <string, set<pair<int, string> > > dic1;
    unordered_map <string, set<pair<int, string> > > dic2;
    while(n--) {
        getline(cin, aa);
        ss.str(aa);
        if (aa[0] == ' ') {
            ss >> p;
            ss >> b;
        }
        else {
            ss >> a;
            ss >> p;
            ss >> b;
            source = a;
        }
        ss.str("");
        ss.clear();
        string new_a = source;
        if (source[0] == '*') {
            new_a = "";
            for (int i = 2; i < source.length();i++) {
                new_a += source[i];
            }
            dic2[new_a].insert(make_pair(p,b));
        }
        else {
            dic1[new_a].insert(make_pair(p,b));
        }
    }
    // for (auto i:dic) {
    //     cout<<i.first<<" "<<i.second.size()<<endl;
    // }
    char x;
    string q;
    getline(cin, aa);
    ss.str(aa);
    ss>>x;
    // cout<<"Answering"<<endl;
    map <string, bool> status;
    while (x != 'X') {
        int priority = INT_MAX;
        ss >> q;
        if (x == 'U') {
            status[q] = true;
            ss.str("");
            ss.clear();
            getline(cin, aa);
            ss.str(aa);
            ss >> x;
            continue;
        }
        if (x == 'D') {
            status[q] = false;
            ss.str("");
            ss.clear();
            getline(cin, aa);
            ss.str(aa);
            ss >> x;
            continue;
        }
        string backup_q = q;
        set <pair <int, string> > res;
        if (dic1.find(q) != dic1.end()) {
            set <pair <int, string> > temp = dic1[q];
            for (auto i:temp) {
                if (status.find(i.second) == status.end() || status[i.second]) {
                    // cout<<" "<<i.second;
                    res.insert(i);
                    priority = min(i.first, priority);
                    break;
                }
            }
        }
        string new_q = "";
        int pos = 0;
        for (;pos<q.length();pos++) {
            if (q[pos] == '.') {
                break;
            }
        }
        pos += 1;
        for (; pos < q.length();pos++) {
            new_q += q[pos];
        }
        q = new_q;
        while (q != "") {
            if (dic2.find(q) != dic2.end()) {
                set <pair <int, string> > temp = dic2[q];
                for (auto i:temp) {
                    if ((status.find(i.second) == status.end() || status[i.second]) && i.first < priority){
                        // cout<<" "<<i.second;
                        res.insert(i);
                        priority = i.first;
                    }
                }
            }
            string new_q = "";
            int pos = 0;
            for (;pos<q.length();pos++) {
                if (q[pos] == '.') {
                    break;
                }
            }
            pos += 1;
            for (; pos < q.length();pos++) {
                new_q += q[pos];
            }
            q = new_q;
        }
        cout << backup_q << " =>";
        for (auto i:res) {
            cout<<" "<<i.second;
            break;
        }
        cout<<endl;
        ss.str("");
        ss.clear();
        getline(cin, aa);
        ss.str(aa);
        ss >> x;
    }
    return 0;
}
