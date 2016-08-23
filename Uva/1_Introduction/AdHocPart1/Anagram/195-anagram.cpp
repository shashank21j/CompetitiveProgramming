#include <bits/stdc++.h>
using namespace std;

bool myfunction (string s1, string s2) {
    for (int i = 0; i < s1.length(); i++) {
        char t1 = s1[i];
        char t2 = s2[i];
        if (t2 >= 97) {
            t2 -= 32;
        }
        if (t1 >= 97) {
            t1 -= 32;
        }
        if (t1 < t2) {
            return true;
        } else if (t1 > t2) {
            return false;
        } else if (s1[i] < s2[i]) {
            return true;
        } else if (s1[i] > s2[i]) {
            return false;
        }
    }
}

string str(vector <char> t) {
    string res = "";
    for (auto i:t) {
        res += i;
    }
    return res;
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        set <string> some;
        vector <char> t1;
        for (auto i:s) {
            t1.push_back(i);
        }
        sort(t1.begin(), t1.end());
        do {
            some.insert(str(t1));
        } while (next_permutation(t1.begin(), t1.end()));
        vector <string> res;
        for (auto i:some) {
            res.push_back(i);
        }
        sort(res.begin(), res.end(), myfunction);
        for (auto i: res) {
            cout << i << endl;
        }
    }
    return 0;
}
