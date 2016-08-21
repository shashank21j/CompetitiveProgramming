#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    for (int i = 0;i<t;i++) {
        int k,c,s; //2 3 2
        cin>>k>>c>>s;
        if (c == 1 && s < k) cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
        else if (c == 1) {
            cout<<"Case #"<<i+1<<": ";
            for (int it = 1;it<=k;it++) {
                cout<<it;
                if (it < k) cout<<" ";
            }
            cout<<endl;
        }
        else if (k == 1) {
            cout<<"Case #"<<i+1<<": "<<"1"<<endl;
        }
        else if (k == 2) {
            cout<<"Case #"<<i+1<<": "<<"2"<<endl;
        }
        else if (k%2 == 0 && (k/2)%2==0) {
            if (s < k/2) cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
            else {
                cout<<"Case #"<<i+1<<": ";
                for (int it = (k*k)/2 - k/4 +1;it<(k*k)/2 + k/4 +1;it++) {
                    cout<<it;
                    if (it < (k*k)/2 + k/4) cout<<" ";
                }
                cout<<endl;
            }
        }
        else if (k%2 == 0){
            if (s<k/2+1) cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
            else {
                cout<<"Case #"<<i+1<<": ";
                for (int it = (k*k)/2 - k/2 + 2;it<(k*k)/2 + k/2;it++) {
                    cout<<it;
                    if (it < (k*k)/2 + k/2 -1) cout<<" ";
                }
                cout<<endl;
            }
        }
        else if (k == 3) {
            if (s < 2) cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
            else cout<<"Case #"<<i+1<<": "<<"2 3"<<endl;
        }
        else {
            if (s < k - 2) cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
            else {
                cout<<"Case #"<<i+1<<": ";
                for (int it = k * (k/2) - k/2 + 1; it < k*(k/2) + k/2;it++) {
                    cout<<it;
                    if (it < k*(k/2) + k/2 -1) cout<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
