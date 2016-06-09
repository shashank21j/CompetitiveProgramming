#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    while(cin>>n>>m) {
        vector <int> arr(n);
        map<int,vector<int> > dic;
        for (int i = 0;i<n;i++) {
            cin>>arr[i];
            dic[arr[i]].push_back(i+1);
        }
        int k,v;
        for (int i = 0;i<m;i++) {
            cin>>k>>v;
            if (dic.find(v) == dic.end() || k>dic[v].size()) {
                cout<<0<<endl;
            }
            else {
                cout<<dic[v][k-1]<<endl;
            }
        }
    }
    return 0;
}