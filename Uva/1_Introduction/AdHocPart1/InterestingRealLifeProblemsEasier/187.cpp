#include <bits/stdc++.h>
using namespace std;

stringstream ss;
int integer(string s) {
    int a;
    ss.str("");
    ss.clear();
    ss.str(s);
    ss >> a;
    return a;
}
int main() {
    string inp;
    unordered_map <string, string> ledger;
    while (getline(cin, inp)) {
        string code = "";
        for (int i = 0;i < 3; i++) {
            code += inp[i];
        }
        string remaining = "";
        if (code == "000") {
            break;
        }
        for (int i = 3; i < inp.length(); i++) {
            remaining += inp[i];
        }
        ledger[code] = remaining;
        inp = "";
    }
    map <string, map <string, int> > transactions;
    while (getline(cin, inp)) {
        string code = "";
        for (int i = 0;i < 3; i++) {
            code += inp[i];
        }
        if (code == "000") {
            break;
        }
        string code1 = "";
        for (int i = 3;i < 6; i++) {
            code1 += inp[i];
        }
        string b = "";
        for (int i = 6; i < inp.length();i++) {
            b += inp[i];
        }
        transactions[code][code1] = integer(b);
    }
    for (auto i:transactions) {
        int sum1 = 0;
        for (auto j:i.second) {
            sum1 += j.second;
        }
        sum1 *= -1;
        if (sum1 != 0) {
            cout<<"*** Transaction "<<i.first<<" is out of balance ***"<<endl;
            for (auto j:i.second) {
                cout<<j.first<<" ";
                cout.width(31);
                cout<<left<<ledger[j.first];
                cout<<" ";
                cout<<fixed<<setprecision(2);
                cout.width(9);
                cout<<right<<(double)j.second/100<<endl;
            }
            cout<<999<<" ";
            cout.width(31);
            cout<<left<<"Out of Balance";
            cout<<" ";
            cout.width(9);
            cout<<right<<(double)sum1/100<<endl;
            cout << endl;
        }
    }
    return 0;
}
