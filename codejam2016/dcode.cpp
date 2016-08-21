#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    for (int i = 0;i<t;i++) {
        int k,c,s; //2 3 2
        cin>>k>>c>>s;
        cout<<"Case #"<<i+1<<": ";
        for (int it = 1;it<=k;it++) {
                cout<<it;
                if (it < k) cout<<" ";
            }
            cout<<endl;
    }
    return 0;
}
