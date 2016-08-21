#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    for (int i = 0;i<t;i++) {
        string s;
        int inv = 0;
        cin>>s;
        for (int j = 0;j<s.length()-1;j++) {
            if (s[j]!=s[j+1]) {
                inv++;
            }
        }
        if (s[s.length()-1] == '-') inv++;
        cout<<"Case #"<<i+1<<": "<<inv<<endl;
    }
    return 0;
}
