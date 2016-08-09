#include <bits/stdc++.h>
using namespace std;

string f(char c, map<char, char> &dic) {
    string res = "";
    if(dic.find(c) != dic.end()) {
        res += dic[c];
    } else {
        res = "";
    }
    return res;
}

string clean(string s, map <char, char> &dic) {
    string res = "";
    res += f(s[0],dic);
    for (int i = 1;i < s.length(); i++) {
        if (f(s[i], dic) != f(s[i-1], dic)) {
            res += f(s[i], dic);
        }
    }
    return res;
}

int main() {
    string inp;
    map <char, char> dic = {
        {'B', '1'}, {'F', '1'}, {'P', '1'}, {'V', '1'}, {'C', '2'}, {'G', '2'}, {'J', '2'},
        {'K', '2'}, {'Q', '2'}, {'S', '2'}, {'X', '2'}, {'Z', '2'}, {'D', '3'}, {'T', '3'},
        {'L', '4'}, {'M', '5'}, {'N', '5'}, {'R', '6'}
    };
    while(cin >> inp) {
        cout<<clean(inp, dic)<<endl;
    }
    return 0;
}
