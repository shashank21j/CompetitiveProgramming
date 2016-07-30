/*
No need to use any formatting, everything can be space
separated, don't even care to fill the voids with spaces
as in the case of unknowns.

Only check if gievn code is STD, and number is valid.
Similarly for ISD.
*/
#include <bits/stdc++.h>
using namespace std;
stringstream ss;

bool is_isd(string s) {
    if (s[0] == '0' && s[1] == '0' && s.length() > 2) {
        return true;
    }
    return false;
}
bool is_std(string s) {
    if (s[0] == '0' && s.length() > 1) {
        return true;
    }
    return false;
}

void print_invalid(string s, int d) {
    cout << s << " " << "Unknown" << " " << d << " " << "-1.00" << endl;
}

void print_local(string s, int d) {
    cout << s << " " << "Local" << " " << s << " " << d << " " << 0.00 << " " << 0.00 << endl;
}
int main () {
    map <string, pair<string, int> > codes;
    string inp;
    while(1) {
        getline(cin, inp);
        if (inp == "000000") {
            break;
        }
        ss.str("");
        ss.clear();
        ss.str(inp);
        string code1;
        string code2;
        string region = "";
        ss >> code1;
        getline(ss, code2);
        int cost = 0;
        int i = 1;
        for (; i < code2.length(); i++) {
            if (code2[i] != '$') {
                region += code2[i];
            } else {
                break;
            }
        }
        i += 1;
        for (; i< code2.length(); i++) {
            cost = cost*10 + (code2[i] - 48);
        }
        codes[code1] = make_pair(region, cost);
    }
    while (1) {
        getline(cin, inp);
        if (inp == "#") {
            break;
        }
        string code1;
        int duration;
        ss.str("");
        ss.clear();
        ss.str(inp);
        ss >> code1 >> duration;
        string code = "";
        if (code1[0] != '0') {
            print_local(code1, duration);
            continue;
        }
        cout << fixed << setprecision(2);
        bool flag = true;
        bool invalid = false;
        for (int i = 0; i < code1.length();) {
            code += code1[i];
            string temp = "";
            for (int j = i + 1; j < code1.length(); j++) {
                temp += code1[j];
            }
            if ((is_isd(code) && codes.find(code) != codes.end()
                && temp.length() >= 4 && temp.length() <= 10)
                || (is_std(code) && codes.find(code) != codes.end()
                && temp.length() >= 4 && temp.length() <= 7)){
                flag = false;
                cout << code1 << " " << codes[code].first << " " << temp << " " << duration << " ";
                cout << (double)codes[code].second/100 << " " << ((double)codes[code].second*duration)/100;
                cout << endl;
                break;
            }
            i+=1;
        }
        if (flag) {
            print_invalid(code1, duration);
        }
    }
    return 0;
}
