#include <bits/stdc++.h>

using namespace std;

bool palin(vector <char> test) {
    for (int i = 0;i<test.size();i++) {
        if (test[i] != test[test.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main () {
    string s;
    getline(cin,s);
    while (s != "DONE") {
        vector <char> test;
        for (int i = 0;i<s.length();i++) {
            if (s[i] == ',' || s[i] == ' ' || s[i] == '.' || s[i] == '!' || s[i] == '?') continue;
            else if (s[i]  >= 97) test.push_back(s[i] - 32);
            else test.push_back(s[i]);
        }
        if (palin(test)) {
            cout<<"You won't be eaten!\n";
        }
        else {
            cout<<"Uh oh..\n";
        }

        getline(cin,s);
    }
    return 0;
}