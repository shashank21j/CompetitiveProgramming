#include <bits/stdc++.h>
using namespace std;

int main () {
    int b,s;
    while (1) {
        cin>>b>>s;
        if (b + s == 0) {
            break;
        }
        vector <int> hashl(b+2,0);
        vector <int> hashr(b+2,0);
        for (int i = 1;i<=b;i++) {
            hashl[i] = i-1;
            hashr[i] = i+1;
        }
        int t1,t2;
        for (int i = 0;i<s;i++) {
            cin>>t1>>t2;
            int left = hashl[t1];
            int right = hashr[t2];
            hashr[left] = right;
            hashl[right] = left;
            if (left < 1) {
                cout<<"*"<<" ";
            }
            else {
                cout<<left<<" ";
            }
            if (right <= b) {
                cout<<right<<endl;
            }
            else {
                cout<<"*"<<endl;
            }
        }
        cout<<"-"<<endl;
    }
    return 0;
}
