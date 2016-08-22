#include <bits/stdc++.h>
using namespace std;

typedef pair<string, string> myPair_type;
struct mypair_comp {
    bool operator() (myPair_type const& lhs, myPair_type const& rhs) {
        return lhs.first < rhs.first;
    }
};
string small(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || (s[i] >= 97 && s[i] <= 122)) {
            res += s[i];
        } else {
            res += s[i] + 32;
        }
    }
    return res;
}

string large(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            res += s[i];
        } else {
            res += s[i] - 32;
        }
    }
    return res;
}

string fun(int k, string t, string s) {
    bool flag = false;
    int wc = 0;
    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] == ' ') {
            if (flag == true) {
                wc += 1;
            }
            flag = false;
        } else {
            if (flag == false && wc == k) {
                for (int j = i; j < i + t.length(); j++) {
                    s[j] = t[j-i];
                }
                break;
            }
            flag = true;
        }
    }
    return s;
}

stringstream ss;
int main() {
    set <string> ignored;
    string s;
    while (getline(cin, s)) {
        if (s == "::") {
            break;
        }
        ignored.insert(s);
    }
    vector <pair<string, string> > res;
    while (getline(cin, s)) {
        ss.str("");
        ss.clear();
        ss.str(s);
        string ele;
        string res_temp = "";
        vector <string> temp;
        while (ss >> ele) {
            temp.push_back(small(ele));
        }
        for (int i = 0; i < (int)temp.size(); i++) {
            if (ignored.find(temp[i]) == ignored.end()) {
                res.push_back(make_pair(temp[i], fun(i, large(temp[i]), small(s))));
            }
        }
    }
    stable_sort(res.begin(), res.end(), mypair_comp());
    for (auto i:res) {
        cout<< i.second << endl;
    }
    return 0;
}
