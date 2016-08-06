#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int k;
        cin>>k;
        map<char,int> dic;
        char c;
        int v;
        for (int i = 0;i<k;i++) {
            cin>>c>>v;
            dic[c] = v;
        }
        int l;
        cin>>l;
        string s;
        int cost = 0;
        getchar();
        for (int i = 0;i<l;i++) {
            getline(cin,s);
            for (int j = 0;j<s.length();j++) {
                if (dic.find(s[j])!= dic.end()) {
                    cost += dic[s[j]];
                }
            }
        }
        printf("%d.%02d$\n",cost/100,cost%100);
    }
    return 0;
}