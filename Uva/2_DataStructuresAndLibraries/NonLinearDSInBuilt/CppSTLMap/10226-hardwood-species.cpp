#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    string s;
    getline(cin,s);
    getline(cin,s);
    while (t--) {
        int cnt = 0;
        getline(cin,s);
        map<string,int> dic;
        while (s.length() != 0) {
            cnt+= 1;
            if (dic.find(s)!= dic.end()) {
                dic[s] += 1;
            }
            else {
                dic[s] = 1;
            }
            getline(cin,s);
        }
        for (auto i:dic) {
            cout<<i.first<<" ";
            printf("%.4f\n",(double)i.second*100/(double)cnt);
        }
        if (t > 0) cout<<endl;
    }
    return 0;
}