#include <bits/stdc++.h>
using namespace std;

bool is_rev (string s, string r) {
    for (int i = 0;i<s.length();i++) {
        if (s[i] != r[r.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

bool is_palin (string s) {
    for (int i = 0;i<s.length();i++) {
        if (s[i] != s[s.length()-1-i]) {
            return false;
        }
    }
    return true;
}
int main () {
    string s;
    while(getline(cin,s)) {
        bool palin, reverse;
        string rs = "";
        for (int i = 0;i<s.length();i++) {
            if (
                s[i] == 'A' || s[i] == 'H' || s[i] == 'I' || s[i] == 'M' ||
                s[i] == 'O' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' ||
                s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == '1' ||
                s[i] == '8'
            ) {
                rs += s[i];
            }
            else if (s[i] == 'E') {
                rs += '3';
            }
            else if (s[i] == 'J') {
                rs += 'L';
            }
            else if (s[i] == 'L') {
                rs += 'J';
            }
            else if (s[i] == 'S') {
                rs += '2';
            }
            else if (s[i] == 'Z') {
                rs += '5';
            }
            else if (s[i] == '2') {
                rs += 'S';
            }
            else if (s[i] == '3') {
                rs += 'E';
            }
            else if (s[i] == '5') {
                rs += 'Z';
            }
            else {
                rs += '-';
            }
        }
        reverse = is_rev(s,rs);
        palin = is_palin(s);
        if (!reverse && !palin) {
            cout<<s<<" -- is not a palindrome."<<endl;
        }
        else if (!reverse && palin) {
            cout<<s<<" -- is a regular palindrome."<<endl;
        }
        else if (reverse && !palin) {
            cout<<s<<" -- is a mirrored string."<<endl;
        }
        else if (reverse && palin) {
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        }
        cout<<endl;
    }
    return 0;
}