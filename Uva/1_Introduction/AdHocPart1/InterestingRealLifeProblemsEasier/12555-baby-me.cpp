#include <bits/stdc++.h>
using namespace std;
/*
Warning no spaces in testcases
*/
stringstream ss;
int main() {
    int t;
    string inp;
    cin>> t;
    int l1;
    int l2;
    string symb;
    getline(cin, inp);
    int idx = 0;
    while (t--) {
        getline(cin, inp);
        ss.str("");
        ss.clear();
        ss.str(inp);
        ss >> l1;
        ss >> symb;
        if (symb.length() > 3) {
            l2 = symb[3] - 48;
        } else {
            l2 = 0;
        }
        cout<<"Case "<<++idx<<": "<<l1*0.5 + l2*0.05<<endl;
    }
    return 0;
}
