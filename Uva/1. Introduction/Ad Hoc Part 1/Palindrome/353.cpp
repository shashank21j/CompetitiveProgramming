#include <bits/stdc++.h>

using namespace std;
bool palin(string s) {
    for (int i = 0;i<s.length();i++) {
        if (s[i] != s[s.length() - 1 - i ]) return false;
    }
    return true;
}

int main () {
    string s;
    while (getline(cin,s)) {
        set <string> chk;
        for (int i = 0;i<s.length();i++) {
            for (int j = i;j < s.length(); j++) {
                string temp = "";
                for (int k = i; k <j+1; k++ ) {
                    temp+=s[k];
                }
                chk.insert(temp);
            }
        }
        int cnt = 0;
        for (auto i:chk) {
            // cout<<i<<endl;
            if (palin(i)) {
                cnt++;
            }
        }
        cout<<"The string '"<<s<<"' contains "<<cnt<<" palindromes."<<endl;
    }
    return 0;
}