#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector <int> vals;
    while(getline(cin,s)) {
        int i1 = 0;
        int i2 = 0;
        string inp = "";
        for (int i = 0;i < s.length();i++) {
            if (s[i] != ' ') {
                i1 = i;
                break;
            }
        }
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                i2 = i;
                break;
            }
        }
        for (int i = i1;i <= i2;i++) {
            if (i < s.length()) {
                inp += s[i];
            }
        }
        vals.clear();
        for (int i = 0;i < inp.length(); i++) {
            if (inp[i] >= 48 && inp[i] <= 57) {
                vals.push_back(inp[i] - 48);
            } else if (inp[i] == 'X' || inp[i] == 'x') {
                vals.push_back(10);
            } else if (inp[i] == '-') {
                continue;
            } else {
                vals.push_back(-1);
            }
        }
        if (vals.size() != 10) {
            cout<<inp<<" is incorrect."<<endl;
            continue;
        }
        bool flag = true;
        for (int i = 0;i < 10; i++) {
            if (vals[i] == 10 && i < 9) {
                flag = false;
            }
            if (vals[i] < 0) {
                flag = false;
            }
        }
        if (!flag) {
            cout<<inp<<" is incorrect."<<endl;
            continue;
        }
        vector <int> s1(10);
        vector <int> s2(10);
        int sum1 = 0;
        for (int i = 0;i < 10; i++) {
            sum1 += vals[i];
            s1[i] = sum1;
        }
        sum1 = 0;
        for (int i = 0;i < 10; i++) {
            sum1 += s1[i];
            s2[i] = sum1;
        }
        if(s2[9] % 11 != 0) {
            cout<<inp<<" is incorrect."<<endl;
        } else {
            cout<<inp<<" is correct."<<endl;
        }
    }
    return 0;
}
