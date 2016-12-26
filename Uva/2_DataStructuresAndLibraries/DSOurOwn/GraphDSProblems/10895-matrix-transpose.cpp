#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    while (scanf("%d%d",&m,&n)!=EOF) {
        vector < vector<pair<int,int> > > cols(n);
        for (int i = 0;i<m;i++) {
            int n1;
            cin>>n1;
            vector <int> idx(n1);
            vector <int> val(n1);
            for (int j= 0;j<n1;j++) {
                cin>>idx[j];
            }
            for (int j = 0;j<n1;j++) {
                cin>>val[j];
            }
            for (int j = 0;j<n1;j++) {
                cols[idx[j]-1].push_back(make_pair(i,val[j]));
            }
        }
        cout<<n<<" "<<m<<endl;
        for (int i = 0;i<n;i++) {
            cout<<cols[i].size();
            if (cols[i].size() != 0) cout<<" ";
            for (int j = 0;j<cols[i].size();j++) {
                cout<<cols[i][j].first+1;
                if (j<cols[i].size()-1) cout<<" ";
            }
            cout<<endl;
            for (int j = 0;j<cols[i].size();j++) {
                cout<<cols[i][j].second;
                if (j < cols[i].size()-1) cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}