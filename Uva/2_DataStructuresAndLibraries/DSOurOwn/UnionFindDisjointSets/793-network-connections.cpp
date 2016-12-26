#include <bits/stdc++.h>
using namespace std;

int findset(int i, vector <int> pa) {
    if (i == pa[i]) return i;
    else return pa[i] = findset(pa[i],pa);
}
int union_f(int i, int j, vector <int > pa) {
    return findset(i,pa) == findset(j,pa);
}
int main() {
    int t;
    cin>>t;
    string s;
    while(t--) {
        int n;
        cin>>n;
        getchar();
        vector <int> parent(n+1);
        vector <int> rank(n+1);
        for (int i=1;i<=n;i++) {
            parent[i] = i;
            rank[i] = 0;
        }
        string c;
        int a,b;
        int win = 0;
        int lose = 0;
        getline(cin,s);
        while(s.length() != 0) {
            stringstream ss(s);
            ss>>c>>a>>b;

            if (c == "c") {
                int t1 = findset(a,parent);
                int t2 = findset(b,parent);
                if (union_f(t1,t2,parent)) {
                    getline(cin,s);
                    continue;
                }
                if (rank[t1] > rank[t2]) {
                    parent[t2] = t1;
                }
                else {
                    parent[t1] = t2;
                    if (rank[t1] == rank[t2]){
                        rank[t2]++;
                    }
                }
            }
            else if (c == "q") {
                if (union_f(a,b,parent)) {
                    win++;
                }
                else {
                    lose++;
                }
            }
            getline(cin,s);
        }
        cout<<win<<","<<lose<<endl;
        if (t>0) cout<<endl;
    }
    return 0;
}