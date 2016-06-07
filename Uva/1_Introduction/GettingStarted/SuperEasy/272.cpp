#include <bits/stdc++.h>

using namespace std;

int main () {
    string s;
    int flag = 0;
    while(getline(cin,s)) {
        string out;
        out = "";
        for (int i = 0;i<s.length();i++) {
            if (s[i] == '"') {
                if (flag == 0) {
                    out += "``";
                }
                else {
                    out += "''";
                }
                flag += 1;
                flag %= 2;
            }
            else {
                out += s[i];
            }
        }
        cout<<out<<endl;
    }
    return 0;
}
