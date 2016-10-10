#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    int casen = 0;
    while (cin>>s) {
        if (s == "end") {
            break;
        }
        casen++;
        cout<<"Case "<<casen<<": ";
        vector <stack <char> > trans;

        for (int i = 0;i<s.length();i++) {
            bool flag = false;
            for (int j = 0;j < trans.size();j++) {
                if (trans[j].top() >= s[i]) {
                    trans[j].push(s[i]);
                    flag = true;
                    break;
                }
            }
            if (flag == false) {
                stack <char> new_s;
                new_s.push(s[i]);
                trans.push_back(new_s);
            }
        }
        cout<<trans.size()<<endl;
    }
    return 0;
}