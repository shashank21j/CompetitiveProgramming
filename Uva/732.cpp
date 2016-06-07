#include <bits/stdc++.h>
using namespace std;

set <string> res;

void fun (string r,stack <char> pushpa, string a, string b,int i1,int c) {
    if (i1 >= a.length()) return;
    for (int i = i1;i<a.length();i++) {
        pushpa.push(a[i]);
        r+='1';
        while(!pushpa.empty() && pushpa.top() == b[c]) {
            fun(r,pushpa,a,b,i+1,c);
            r+='0';
            pushpa.pop();
            c++;
        }
    }
    if (pushpa.empty()) {
        res.insert(r);
    }
}


int main () {
    string a,b;
    while (getline(cin,a)) {
        getline(cin,b);
        res.clear();
        stack <char> pushpa;
        string r = "";
        if (a.length() == b.length()) fun(r,pushpa,a,b,0,0);
        vector <string> res2;
        for (auto i:res) {
            res2.push_back(i);
        }
        cout<<"["<<endl;
        for (int i = res2.size()-1; i>= 0; i--) {
            for (int j = 0;j<res2[i].length();j++) {
               if (res2[i][j] == '0') cout<<"o";
               else cout<<"i";
               if (j < res2[i].length()-1) cout<<" ";
            }
            cout<<endl;
        }
        cout<<"]"<<endl;
    }
    return 0;
}