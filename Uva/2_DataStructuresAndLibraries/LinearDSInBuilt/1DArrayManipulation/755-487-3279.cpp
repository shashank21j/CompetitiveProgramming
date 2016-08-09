#include <bits/stdc++.h>
using namespace std;

string clear(string s) {
    string res = "";
    int ctr = 0;
    for (int i = 0; i < s.length(); i++) {
        if (ctr == 3) {
            res += '-';
            ctr += 1;
        }
        if (s[i] >= 48 && s[i] <= 57) {
            res += s[i];
            ctr += 1;
        } else if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') {
            res += '2';
            ctr += 1;
        } else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F') {
            res += '3';
            ctr += 1;
        } else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I') {
            res += '4';
            ctr += 1;
        } else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L') {
            res += '5';
            ctr += 1;
        } else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O') {
            res += '6';
            ctr += 1;
        } else if (s[i] == 'P' || s[i] == 'R' || s[i] == 'S') {
            res += '7';
            ctr += 1;
        } else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V') {
            res += '8';
            ctr += 1;
        } else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y') {
            res += '9';
            ctr += 1;
        }
    }
    return res;
}
int main() {
    int t;
    cin >> t;
    int n;

    while (t--) {
        cin >> n;
        string s;
        map <string, int> dic;
        while (n--) {
            cin >> s;
            string s1 = clear(s);
            dic[s1] += 1;
        }
        bool flag = true;
        for (auto i:dic) {
            if (i.second > 1) {
                flag = false;
                cout<<i.first << " " << i.second<<endl;
            }
        }
        if (flag) {
            cout << "No duplicates." << endl;
        }
        if (t > 0) {
            cout << endl;
        }
    }
    return 0;
}
