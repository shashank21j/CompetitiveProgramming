#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin>>n>>m;
    while (n + m != 0) {
        set<int> alpha;
        int ele;
        int cnt= 0;
        for (int i = 0;i<n;i++) {
            cin>>ele;
            alpha.insert(ele);
        }
        for (int i = 0;i<m;i++) {
            cin>>ele;
            if (alpha.find(ele)!=alpha.end()) {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        cin>>n>>m;
    }
    return 0;
}