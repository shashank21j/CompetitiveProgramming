#include <bits/stdc++.h>

using namespace std;

struct classcomp {
    bool operator() (const pair<int,string> & lhs, const pair<int, string> & rhs) const {
        return lhs.first < rhs.first;
    }
};

bool is_int(string s) {
    for (int i = 0;i < s.length(); i++) {
        if (s[i] > 57 || s[i] < 48) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    string a, b;
    int p;
    string source;
    set <string> multi;
    map <string, set<pair<int, string>, classcomp > > dic;
    while(n--) {
        cin>>a;
        if (is_int(a)) {
            stringstream ss(a);
            ss >> p;
        }
        else {
            source = a;
            cin >> p;
        }
        cin >> b;
        string new_a = source;
        if (source[0] == '*') {
            new_a = "";
            for (int i = 2; i < source.length();i++) {
                new_a += source[i];
            }
            multi.insert(new_a);
        }
        dic[new_a].insert(make_pair(p,b));
    }
    // for (auto i:dic) {
    //     cout<<i.first<<" "<<i.second.size()<<endl;
    // }
    char x;
    string q;
    cin>>x;
    // cout<<"Answering"<<endl;
    map <string, bool> status;
    while (x != 'X') {
        int priority = INT_MAX;
        cin >> q;
        if (x == 'U') {
            status[q] = true;
            cin >> x;
            continue;
        }
        if (x == 'D') {
            status[q] = false;
            cin >> x;
            continue;
        }
        string backup_q = q;
        set <pair <int, string>, classcomp > res;
        if (dic.find(q) != dic.end() && multi.find(q) == multi.end()) {
            set <pair <int, string>, classcomp > temp = dic[q];
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
            if (dic.find(q) != dic.end() && multi.find(q) != multi.end()) {
                set <pair <int, string>, classcomp > temp = dic[q];
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
        cin>>x;
    }
    return 0;
}
