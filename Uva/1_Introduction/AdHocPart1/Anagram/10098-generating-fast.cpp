#include <bits/stdc++.h>
using namespace std;

int main () {
    int te;
    cin>>te;
    while (te--) {
        string s;
        cin>>s;
        string t = s;
        sort(t.begin(), t.end());
        do {
            cout<<t<<endl;
        } while (next_permutation(t.begin(), t.end()));
        cout<<endl;
    }
    return 0;
}
