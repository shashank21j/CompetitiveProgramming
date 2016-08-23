#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;
    map <string, set<string> > dic;
    while (s != "XXXXXX") {
        string t = s;
        sort(t.begin(), t.end());
        dic[t].insert(s);
        cin >> s;
    }
    cin >> s;
    while(s != "XXXXXX") {
        string t = s;
        sort(t.begin(), t.end());
        if (dic.find(t) == dic.end()) {
            cout<<"NOT A VALID WORD"<<endl;
        }
        else {
            for (auto i:dic[t]) {
                cout << i << endl;
            }
        }
        cout << "******" << endl;
        cin >> s;
    }
    return 0;
}
