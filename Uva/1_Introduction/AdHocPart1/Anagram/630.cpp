#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        map <string, vector<string> > dic;
        string s;
        for (int i = 0;i < n;i++) {
            cin>>s;
            string t = s;
            sort(t.begin(), t.end());
            dic[t].push_back(s);
        }
        cin>>s;
        while(s != "END") {
            string t = s;
            sort(t.begin(), t.end());
            cout<<"Anagrams for: "<<s<<endl;
            if (dic.find(t) == dic.end()) {
                cout<<"No anagrams for: "<<s<<endl;
            } else {
                int it = 1;
                for (auto i:dic[t]) {
                    cout<<"  "<<it++<<") "<<i<<endl;
                }
            }
            cin>>s;
        }
        if(t > 0) {
            cout<<endl;
        }
    }
    return 0;
}
