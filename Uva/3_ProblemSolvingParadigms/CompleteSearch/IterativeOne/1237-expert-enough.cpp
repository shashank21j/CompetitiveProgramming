#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int d;
        cin>>d;
        string s;
        int a,b;
        multimap<string, pair<int,int> > database;
        while (d--) {
            cin>>s>>a>>b;
            database.insert(make_pair(s,make_pair(a,b)));
        }
        int q;
        cin>>q;
        int p;
        while(q--) {
            cin>>p;
            string res = "";
            for (auto i:database) {
                if (i.second.first <= p && p <= i.second.second) {
                    if (res == "") res = i.first;
                    else {
                        res = "";
                        break;
                    }
                }
            }
            if (res == "") {
                cout<<"UNDETERMINED"<<endl;
            }
            else {
                cout<<res<<endl;
            }
        }
        if (t > 0) cout<<endl;
    }
    return 0;
}
